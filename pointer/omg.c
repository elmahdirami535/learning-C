#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";


  // Code for Checkpoint 1 goes here.
int *ptr = &arr[0];
  // Code for Checkpoint 2 goes here.
for (int i = 0 ; i < 10 ; i++)
{
printf("%p\n", &ptr);
ptr++;
}
  // Code for Checkpoint 3 goes here.

  // Code for Checkpoint 4 goes here.
  
  printf("%s\n", s);  
}