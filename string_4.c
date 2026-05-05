#include <stdio.h>
#define SIZE 32
void main()
{

   char name[SIZE], name2[SIZE], lower, upper;
   int ascii, index = 0;

   printf("Enter your name");
   gets(name);
   fflush(stdin);

   while (index < SIZE && name[index] != '\0')
   {

      lower = name[index];
      ascii = lower;
      ascii = ascii;
      upper = ascii;
      name2[index] = upper;
      index = index + 1;
   }

   name2[index] = '\0';
   printf("name2 is %s", name2);
}