#include <stdio.h>
#define SIZE 4

void main()
{

   int total, mark[SIZE];
   float avrage;

   for (int index = 0; index <= SIZE; index++)
   {
      printf(" Enter %d subject mark", index + 1);
      scanf("%d", &mark[index]);
   }
   total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4];

   avrage = total / SIZE;

   printf("total = %d avrage=%.2f", total, avrage);
}