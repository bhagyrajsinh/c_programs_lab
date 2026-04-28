#include <stdio.h>
void main()
{

   int subject[5];

   subject[0] = 1;
   subject[1] = 2;
   subject[2] = 3;
   subject[3] = 4;
   subject[4] = 5;

   for (int position = 0; position <= 5; position++)
   {
      printf("\n %d subject mark %d", position + 1, subject[position]);
   }
}