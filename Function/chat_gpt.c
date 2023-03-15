#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Enter a number: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return (0);
}