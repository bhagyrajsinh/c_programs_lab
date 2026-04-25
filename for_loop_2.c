#include <stdio.h>
void main()
{

   int number, multiplier, result;
   printf("please enter the number ");
   scanf("%d" ,& number);

   for (multiplier = 10; multiplier >= 1; multiplier--)
   {
      result = number * multiplier;

      printf("%d X %d = %d\n", number, multiplier, result);
   }
}