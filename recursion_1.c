/*
the first example of  recursion
*/
#include <stdio.h>

void printnumber(int count)
{
   if (count <= 100)
   {
      printf("%d \t ", count);
      count++;
      printnumber(count);
   }
}
void main()
{

   printnumber(1);
}