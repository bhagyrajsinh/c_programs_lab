#include <stdio.h>
#define SIZE 20

void main()
{

   char name[] = " bhagyrajsinh";
   int vowel = 0, position;
   puts(name);
   position = 0;
   do
   {

      if (name[position] == 'a' || name[position] == 'e' || name[position] == 'i' || name[position] == 'o' || name[position] == 'u')

      {
         vowel++;
      }

      position++;

   } while (position < SIZE);

   printf("total number vowel is  = %d", vowel);
}