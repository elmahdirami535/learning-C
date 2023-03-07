#include <stdio.h>
#include <math.h>

int main(void)
{
	int value;
	float d;
	float r;
	float PI = 3.14;

	printf("Lets calculate the circle's circumfrence!\n");
	printf("What values do you have ?\n");
	printf("If you have the radius, print 1\n");
	printf("If you have the diameter, print 2.\n");
	scanf("%d", &value);

	if (value == 2)
	{
		printf("What is your circle diameter?\n");
		scanf("%f", &d);

		r = 0.5 * d;
		float circumfrence = 2 * PI * r;

		printf("\nYour circle's circumference is %.2f. \n", circumfrence);
	}

	else if (value == 1)
	{

		printf("What is your circle radius?\n");
		scanf("%f", &r);

		float circumfrence = 2 * PI * r;

		printf("\nYour circle's circumference is %.2f. \n", circumfrence);
	}

	return (0);
}
