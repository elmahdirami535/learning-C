#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 16; 
	int *pointer = &i;
             
	printf("%p\n", &i); //&i is the address of the variable i
	printf("%p\n", pointer); //pointer is the value stored in the pointer pointer, which is also the address of the variable i
	printf("%p\n", *pointer); //*pointer is the value pointed to by the pointer pointer, which is the value of the variable i
	printf("%p\n", &pointer); //&pointer is the address of the pointer pointer. 
}