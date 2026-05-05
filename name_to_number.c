#include <stdio.h>
void main()
{
   int number;
   char name;

   printf("please enter the name ");
   scanf("%c", &name);

   number = name;
   printf("number is %d", number);
}