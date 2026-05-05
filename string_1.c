#include <stdio.h>
void main()
{

   char name[30], address[512];
   printf("enter your name without spaece ");
   scanf("%s", &name);
   printf("enter your address ");
   fflush(stdin);
   gets(address);

   printf(" your name is %s \n your address is %s", name, address);
}