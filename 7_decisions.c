#include<stdio.h>
void main()
{
float purchase_price,sale_price,differece;

printf("please enter purchase price:-");
scanf("%f",&purchase_price);

printf("please enter sale price:-");
scanf("%f",&sale_price);

differece = sale_price-purchase_price;
if(differece>0)
{
    printf("you made profit %.2f amount",differece);

}
 
if(differece<0)
{
    printf("you made lose %.2f amount",differece);

}

if(differece==0)

{
    printf("you made no profit and no lose",differece);


}
printf("\n good wises for_next time");








}