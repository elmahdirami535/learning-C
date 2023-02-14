#include<stdio.h>
#include<cs50.h>

const int N = 3;

float average(int lenght, int array[]);

int main(void)
{
  int scores[N];
  for (int i = 0 ; i < N ; i++)
{
   scores[i] = get_int("score: ");
}

printf("Average: %f\n", average(N, scores));
}
float average(int lenght, int array[])
{
  int sum = 0;
  for (int i = 0; i < lenght ; i++)
  {
    sum += array[i];
  }
  return sum / (float) lenght;
}

//version 0.4
/*int i = 0 , n = 3, scores[3];
for (i = 0 ; i < n ; i++)
{
   scores[i] = get_int("score ");
}
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
*/

//version 0.3
  /*  int scores[3];
    scores[0] = get_int("score: ");
    scores[1] = get_int("score: ");
    scores[2] = get_int("score: ");

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
*/

//version 0.2
/*    int scores[3];
    scores[0] = 72;
    scores[1] = 73:
    scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
    */

//version 0.1
  /* int score1 = 72;
   int score2 = 73;
   int score3 = 33;

   printf("Average: %f\n", (score1 + score2 + score3) / (float) 3);
   */

