#include "main.h"

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
 */


int pointer(void)
{
	int num[2] = {5 , 5};
	int *pointer = &num[1];
	printf("%p\n ", pointer);
}

int value()
{
	int lol = 5;
	return (lol);
} 


void incrementAge(int *agePointer)
{
	*agePointer += 1;
}

int pointer1(void)
{
	int age = 18;
	incrementAge(&age);
	printf("%d \n", age);
}
