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
	int arr[] = {3,8,6,2,0,4};
	int* p = &arr[0];
	p++;
	p++;
	printf("%i", *p);
}
