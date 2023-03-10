#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * strlen: calculates and returns the length of a given string excluding the null terminator
 * \0. The function takes a pointer to a string argument and iterates over the characters until
 * it reaches the null terminator.
 */

void mahdi(void);

void mahdi(void)
{
	int num = 12345;
	char str[20];

	sprintf(str, "%d", num); //convert integer to string

	printf("Length of integer %d is %d\n", num, strlen(str));
}

int main(void)
{
	char string[20] = "Hello, world!";
	int length;

	length = strlen(string);

	printf("Length of the string is : %d\n", length );
	mahdi();
	return 0;
}


