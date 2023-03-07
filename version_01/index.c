#include <stdio.h>
#include <cs50.h>

int main(void)
{
	float r = 0.5, circumfrence = 2;
	float PI = 3.14;
	int value  = get_int("Lets calculate the circle's circumf \n What value do you have ? \n If you have the radius, print 1\n If you have diameter , print 2\n");
	switch(value)
	{
		case 2:
			float d = get_float("What is your circle diameter?\n ");
			r *= d;
			circumfrence *= PI * r;
			printf("\n Your circle's circumference is %.2f.", circumfrence);
			break;
		case 1:
			r = get_float("What is your circle radius?\n ");
			circumfrence *= PI * r;
			printf("\nYour circle's circumference is %.2f.", circumfrence);
			break;
		default:
			printf("Invalid\n");
			break;
	}
	return (0);
}
