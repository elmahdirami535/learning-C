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

	printf("%p\n", &i);
	printf("%p\n", pointer);
	printf("%p\n", *pointer);
	printf("%p\n", &pointer);
}
