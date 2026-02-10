#include<stdio.h>

void main()

{

    int num1 = 10,num2 =20,num3 = 30,result;



    result = num1 < num2 && num2 < num3;
    printf("%d = %d < %d && %d < %d", result, num1, num2, num2, num3);

      result = num1 > num2 && num2 < num3;
      printf("\n %d = %d > %d && %d < %d",result,num1,num2,num2,num3);


      result = num1 > num2 && num2 > num3;
      printf("\n %d = %d > %d && %d > %d",result,num1, num2,num2,num3);
       
      result = num1 < num2 && num2 > num3;
      printf("\n %d = %d < %d && %d > %d",result,num1,num2,num2,num3);


      result = num1 < num2 || num2 < num3;
      printf("\n %d = %d < %d || %d < %d", result,num1,num2,num2,num3);

      result = num1 > num2 || num2 > num3;
      printf("\n %d = %d > %d || %d > %d", result,num1,num2,num2,num3);

      result = num1 < num2 || num2 > num3;
      printf("\n %d = %d < %d || %d > %d",result,num1,num2,num2,num3);

      result= num1 > num2 || num2 <  num3;
      printf("\n %d = %d < %d || %d < %d ",result,num1,num2,num2,num3);


      result=!(num1>num2);
      printf("\n %d=!(%d>%d)",result,num1,num2);
}
       






















