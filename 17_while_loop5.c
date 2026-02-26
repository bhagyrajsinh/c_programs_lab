#include<stdio.h>
void main()
{
int year,count;
float amount,intrest;

amount=80000;
intrest=10;
year=5;


intrest= (amount*intrest*1)/100;
amount=amount+intrest;

intrest= (amount*intrest*1)/100;
amount=amount+intrest;

printf("intrest = %.2f",intrest);
}