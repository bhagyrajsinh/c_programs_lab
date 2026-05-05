#include <stdio.h>
#include <string.h>
#define SIZE 32
void main()
{

   char name[SIZE], revese[SIZE];
   int position, index = 0;

   printf("Enter your name");
   gets(name);
   fflush(stdin);
   position = strlen(name);
   position--;

   while (position >=0)
      
   {

      revese[index] = name[position];
      position--;
      index++;
   }
revese[index]='\0';
   printf("REVESE IS %s",revese);
}