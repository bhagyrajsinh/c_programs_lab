#include <stdio.h>
void main()

{
   int line, spece, astrik, count = 5;

   for (line = 5; line >= 1; line--)
   {
      for (spece = 1; spece < line; spece++)
      {
         printf(" ");
      }
      for (astrik = line; astrik <= 5; astrik++)
      {
         printf(" *");
      }
       
      printf("\n");
   }
}