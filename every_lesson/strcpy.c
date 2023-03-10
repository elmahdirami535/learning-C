#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * strcpy: copies the entire string from source to destination including the 
 * terminating null character. If the size of the source string is greater than
 * the maximum size of destination string,it results in undefined behavior.
*/

int main() {
  char src[50] = "Hello World!";
  char dest[50];

  strcpy(dest, src);

  printf("Source string: %s\n", src);
  printf("Destination string: %s\n", dest);

  return 0;
}
