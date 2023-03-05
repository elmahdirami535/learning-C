#include "main.h"

int conditional(void)
{
	int grade1 = 59;
	int grade2 = 90;

	if (grade1 > 60) {
		printf("Pass\n");
	}else{
		printf("Fail\n");
	}
	return (0);
}

int cause(void)
{
	printf("--------------------------------------------------------------------------------------------------\n\n");
	return (0);
}
int passweord(void)
{
	int pin = 0;
	int tries = 0;

	printf("BANK OF THE WORLD:\n");
	printf("Enter your PIN: ");
	scanf("%d", &pin);

	tries++;

	while (pin != 200556 && tries < 3) {
		printf("Enter your PIN: ");
		scanf("%d", &pin);
		tries++;
	}

	if (pin == 200556) {
		printf("PIN accepted!\n");
		printf("You now have access.\n");
	}
}
