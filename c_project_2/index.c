
# include <stdio.h>


int main(void) {
  char msg[] = "hello";
  char *pMsg= msg;
  // adress of the array
  printf("\nchar msg = \"hello\";\n");
  printf("char *pMsg = &msg[6];\n\n");
  printf("adress of msg array : &msg = %p\n", &msg);
  printf("value of the pointer: pMsg = %p\n\n", pMsg);
  // adress of the first element of the array is equal to the adress of the
  // array
printf("     *pMsg = msg[0] : %d = %d\n", *pMsg, msg[0]);
printf(" *(pMsg + 0) = msg[0] : %d = %d\n", *(pMsg + 0), msg[0]);
printf(" *(pMsg + 1) = msg[0] : %d = %d\n\n", *(pMsg + 1), msg[1]);
// 0x hexadecimal notation from 0-9 + a-f
  printf("Element | Adress of elem | Value | Magic     | ascii \n");
  printf("-----------------------------------------------------\n");
  printf("msg     | %p |       | \n", &msg);
  printf("msg[0]  | %p | %c     | *(pMsg+0) | %d\n", &msg[0], msg[0], *(pMsg+0));
  printf("msg[1]  | %p | %c     | *(pMsg+1) | %d\n", &msg[1], msg[1], *(pMsg+1));
  printf("msg[2]  | %p | %c     | *(pMsg+2) | %d\n", &msg[2], msg[2], *(pMsg+2));
  printf("msg[3]  | %p | %c     | *(pMsg+3) | %d\n", &msg[3], msg[3], *(pMsg+3));
  printf("msg[4]  | %p | %c     | *(pMsg+4) | %d\n", &msg[4], msg[4], *(pMsg+4));

  printf("size of char %zu \n", sizeof(char)); // 1
  printf("*(pMsg + 0) ==> *( pMsg + ( 0 * sizeof(char) )) \n");
  printf("*(pMsg + 1) ==> *( pMsg + ( 1 * sizeof(char) )) \n");
  printf("--------\n\n");

  int number[] = {35, 250, 27, 14};
  int *pNumber = number;
	
  printf("\nint numner[] = {35, 250, 27, 14};\n");
  printf("int *pNumber = number;\n\n");
  printf("adress of msg array : &number = %p\n", &number);
  printf("value of the pointer: pNumber = %p\n", pNumber);
  printf("Element   | Adress of elem | Value | Magic pointer |   \n");
  printf("--------------------------------------------------------\n");
  printf("number    | %p |       |\n", &number);
  printf("number[0] | %p | %d    | *(pNumber+0)  | %d \n", &number[0], number[0], *(pNumber+0));
  printf("number[1] | %p | %d   | *(pNumber+1)  | %d \n", &number[1], number[1], *(pNumber+1));
  printf("number[2] | %p | %d    | *(pNumber+2)  | %d \n", &number[2], number[2], *(pNumber+2));
  printf("number[3] | %p | %d    | *(pNumber+3)  | %d \n", &number[3], number[3], *(pNumber+3));
  printf("size of int %zu \n", sizeof(int)); // 4
  printf("*(pNumber + 0) ==> *( pNumber + ( 0 * sizeof(int) )) \n");
  printf("*(pNumber + 1) ==> *( pNumber + ( 1 * sizeof(int) )) \n");
  printf("--------\n\n");

  // dereferencing a pointer to get the value it sorted
  // dereferencing is puting a * before the pointer variable
  int num = 36;
  int *pNum = &num;
  int swat = *pNum;
  printf("int num   = 36;\n");
  printf("int *pNum = &num;\n\n");
  printf("  num = %d, on adress  &num = %p\n", num, &num);
  printf("*pNum = %d, pointer pNum = %p\n", *pNum, pNum);
  printf("  *pNum = %d\n", *pNum);   	// * get value  asrterix 
  printf(" &*pNum = %p\n", &*pNum); 	// & get adress Ampersand
  printf("*&*pNum = %d\n", *&*pNum);
  
  printf("--------\n\n");
  



  return 0;
}

