#include <stdio.h>

int main(void)
{
	char msg[] = "hello";
	char *ponter= msg;

	int gr = 100;
	int* omg= &gr;

	int mahdi = 100;
	int* popo = &mahdi;

	printf("%p\n", popo); // Print the address pointed to mahdi
	printf("%p\n", &mahdi); //Print the address of mahdi
	printf("\n\n-------------------------------------------------------------\n\n");

	printf("%p\n", ponter);
	printf("\n\n-------------------------------------------------------------\n\n");
	printf("%p\n", omg);
	printf("%p\n", &gr);

}

