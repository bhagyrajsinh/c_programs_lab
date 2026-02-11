#include<stdio.h>
void main()

{

int b =10,s =0;


s = b++;
printf("s = %d b =%d",s,b);

b = 10;

s = ++b;
printf("\n  s = %d b = %d",s,b);


b =10;

s = b--;
printf("\n s =%d b =%d",s,b);


b =10;

s = --b;
printf("\n s =%d b =%d",s,b);









}