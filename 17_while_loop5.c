#include<stdio.h>
void main()
{
int year,count;
float amount,interest,rate;

printf("Entre amount ");
scanf("%f",&amount);

printf("Enter rate");
scanf("%f",&rate);

printf("Enter year ");
scanf("%d",&year);

count=0;
//while(count<year)
//amount=1000;
//rate=10;
//year=5;
while(count<year)
{
interest= (amount*rate*1)/100;
amount=amount+interest; 
count++;
}
  
//interest= (amount*rate*1)/100;
//amount=amount+interest; 

//interest= (amount*rate*1)/100;
//amount=amount+interest; 

//interest= (amount*interest*1)/100;
//amount=amount+intrest; 

//interest= (amount*interest*1)/100;
//amount=amount+interest; 



printf("amount = %.2f ",amount);
}