#include <stdio.h>
#include <cs50.h>

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float r[4] = {0.5, 2, 3.14};
	int value  = get_int("Lets calculate the circle's circumf \n What value do you have ? \n If you have the radius, print 1\n If you have diameter , print 2\n");
	do
	{
		switch (value)
		{
			case 2:
				r[3] = get_float("What is your circle diameter?\n");
				r[0] *= r[3];
				r[1] *= r[2] * r[0];
				printf("\n Your circle's circumference is %.2f ", r[1]);
				break;
			case 1:
				r[0] = get_float("What is your circle radius?\n");
				r[1] *= r[2] * r[0];
				printf("\nYour circle's circumference is %.2f ", r[1]);
				break;
			default:
				printf("choose just two numbers 1 or 2");
				break;
		}
	}
	while ( 2 != value || value != 1 );

	return (0);
}
