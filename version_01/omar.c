#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){	
	double num[3];
	num[0] = get_double("Lets calculate the traignale's hypotenuse.\n \"A\" Values is: ");
	num[1] = get_double("\"B\" Values is: ");
	num[2] = sqrt(pow(num[0], 2) + pow(num[1], 2));
	printf("The traingle's hypotenuse is : %.2lf", num[2]);
}
