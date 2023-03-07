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

	int m1 = 5;
	int m2 = 5;

	int* pointer = &m1;
	int* pointer1 = &m2;


	printf("this is the results %i , %i \n\n", m1, m2);
	printf("this is the pointer of this two int %p  ,  %p\n\n", pointer,pointer1 );
}
