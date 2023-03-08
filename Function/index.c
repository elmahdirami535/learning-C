#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

int main(void) {
  srand(time(NULL));
  // Write your code below
  int randomNumber = rand() % 20 + 1;
  printf("%i\n", randomNumber);
}
