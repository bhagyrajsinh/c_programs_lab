#include<stdio.h>
void main()
{

int number1,number2,result;

printf("Please enter First Number :-");
scanf("%d",&number1);

printf("Please enter Second Number :-");
scanf("%d",&number2);

if(number1>number2)
{
result = number1*number2;
printf("result=%d",result);
}

if(number1<number2)
{
result = number1-number2;
printf("result=%d",result);
}


if(number1==number2)
{
result = number1+number2;
printf("result=%d",result);
}
























}