#include <stdio.h>
void main()

{
   int line, spece, astrik, count,row,num ;

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






 for (count = 1; count <= 5; count++)
   {
      for (row = 1; row < count; row++)
      {
         printf(" ");
      }
      for (num = count; num <= 5; num++)
      {
         printf(" *");
      }
       
      printf("\n");
   }











}