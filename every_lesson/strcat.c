#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * strcat: concatenates two strings, source string and destination string.
 * It copies the source string at the end of the destination string, adds a
 * null terminator and returns the destination string. Note that the destination
 * string must have enough space available to accommodate both the existing contents
 * and the copy of the source string.
*/

int main() 
{
   char str1[15] = "Hello, ";
   char str2[15] = "world!";
   strcat(str1, str2);
   printf("%s\n", str1);
   return 0;
}
