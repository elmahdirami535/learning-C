__attribute__((section(".data")))
char data_str[] = "Hello, world!\n";

void print_hex(unsigned int num) {
    char hex[] = "0123456789ABCDEF";
    int i;
    for (i = 0; i < 8; i++) {
        char digit = hex[(num >> (28 - 4 * i)) & 0xF];
        asm volatile (
            "movl $4, %%eax\n\t"    // system call for write
            "movl $1, %%ebx\n\t"    // file descriptor for stdout
            "movl %0, %%ecx\n\t"    // pointer to the character
            "movl $1, %%edx\n\t"    // character length
            "int $0x80\n\t"         // invoke the kernel
            :: "r" (&digit)         // input: pointer to the character
            : "eax", "ebx", "ecx", "edx" // clobbered registers
        );
    }
    asm volatile (
        "movl $4, %%eax\n\t"        // system call for write
        "movl $1, %%ebx\n\t"        // file descriptor for stdout
        "movl $data_str, %%ecx\n\t" // pointer to the string
        "movl $14, %%edx\n\t"       // string length
        "int $0x80\n\t"             // invoke the kernel
        ::                          // no input operands
        : "eax", "ebx", "ecx", "edx" // clobbered registers
    );
}

void start() {
    unsigned int dtb = 0x12345678;
    print_hex(dtb);
    asm volatile (
        "movl $1, %%eax\n\t"    // system call for exit
        "xorl %%ebx, %%ebx\n\t" // exit status code 0
        "int $0x80\n\t"         // invoke the kernel
        ::                      // no input operands
        : "eax", "ebx"          // clobbered registers
    );
}
