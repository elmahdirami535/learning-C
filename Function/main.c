#include "main.h"

/**
 * point - just a little pointer practice
 *
 * @size -  also here practice
 *
 * @strleen - thee same here practice
 *
 * @strcatt also here just prctice
 *
 * @strcpyy omg just practice
 * Return: 0 -because we need that
 */


int point(void)
{
	int value, array[4][2];
	int *pointer = &array[1][2];

	value = array[0][2];
	printf("this is the adress of array %p\n\n", &array[0][2]);
	return (value);
}

int size(void)
{
	int a = 56;
	char b[] = {"hello that's fun"};

	printf("the size of this char is:%lu\n", sizeof(b));
	printf("and here is the size of the int %lu\n", sizeof(a));
	return (sizeof(b));
}

int strleen(void)
{
	char myString[] = "what's up slappers";
	int lenght = strlen(myString);

	printf("the lenght of the carachter is %i\n\n", lenght);
	return (0);
}

int strcatt(void)
{
	char string1[] = "you ";
	char string2[] = "see";

	strcat(string1, string2);
	printf("this what the strcat do %s \n\n", string1);
}

int strcpyy(void)
{
	char source[] = {"what's your name"};
	char omg[50];

	strcpy(omg, source);
	printf("this is what does the strcpy do %s \n\n", omg);
}

int abss(void)
{
	int hey = -19;
	int value;
	value = abs(hey);
	printf("%i\n\n", value);
}

int bambo(void)
{
	double omg = 9.7;
	printf("Ceiling of %.1f = %.1f \n\n", omg, ceil(omg));
}

int omg(void)
{
	double i = 100;
	double results;
	results = log(i);
	printf("the logarithm of %.2lf , is %.5lf \n\n", i , results);
}

int upper(void)
{
	char string[] = {"hello, what's up"};

	printf("it make the letter from lower to upper :o magic %s", toupper(string));
}
