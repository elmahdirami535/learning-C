#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int value;

	printf("Lets calculate the circle's circumfrence!\n");
	printf("What values do you have ?\n");
	printf("If you have the radius, print 1\n");
	printf("If you have the diameter, print 2.\n");
	scanf(" %d ", &value);

	if (value == 2)
	{

		float d;
		float r;
		float PI = 3.14;

		printf("What is your circle diameter?\n");
		scanf(" %f ", &d);

		r = 0.5 * d;
		float circumfrence = 2 * PI * r;

		printf("\nYour circle's circumference is %.2f.", circumfrence);
	}

	else if (value == 1)
	{

		float d;
		float r;
		float PI = 3.14;
		printf("What is your circle radius?\n");
		scanf(" \n%f ", &r);

		float circumfrence = 2 * PI * r;

		printf("\nYour circle's circumference is %.2f.", circumfrence);
	}

	return (0);
}
