#include <stdio.h>
void main()

{

   int row, column;

   

   for (column =1 ; column <= 5; column++)
   {
      for (row = 1; row <= column; row++)
      {
         printf("* ");
       
      }
    printf("\n");
}
}