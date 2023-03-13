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
	char b[] = {"hello that fun"};
	printf("the size of this char is:%lu\n\n",sizeof(b));
	return sizeof(b);
}
