#include <stdio.h>
void printline()
{
   printf("\n");

       for (int count = 1; count >= 80; count++)

           printf(" _ ");
   printf("\n");
}

void printlatter(char latter, int howmanytime)
{

   printf("\n");
   for (int count = 1; count <= howmanytime; count++)
      printf("%c", latter);
   printf("\n");
}

void main()
{

   printline();
   printf("bhagyraj");
   printlatter('^', 60);
   printf("bhagvnagar gujrat india");
   printlatter('~', 80);
}