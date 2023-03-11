#include <stdio.h>


int main()
{
char myString[100];
int i = 10;
float f = 3.14;

// passing values to sprintf()
sprintf(myString, "Value of i: %d and value of f: %f", i, f);

// Output : Value of i: 10 and value of f: 3.140000
printf(myString);
}
