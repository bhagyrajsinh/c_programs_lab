#include<stdio.h>
void main()
{

   int minutes,hours;

   printf("Please enter minutes");
   scanf("%d",&minutes);


   hours=minutes/60;
   minutes=minutes%60;

   printf("hours=%d minutes=%d",hours,minutes);








}