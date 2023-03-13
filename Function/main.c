#include "main.h"

/**
 *this is a description
 *
 *this is a project that cover everything
 */


int point()
{
	int value ,array[4][2];
	int *pointer = &array[1][2];
	value = array[0][2];
	printf("look %p\n\n", &array[0][2]);
	return value;
	}

int size()
{
	int a = 56;
	char b[] = {"hello that's fun"};
	printf("the size of this char is:%lu\nAnd here is the size of the int %lu\n",sizeof(b), sizeof(a));
	return sizeof(b);
}

int strleen()
{
	
}

