//array basic division
#include<stdio.h>
#include<conio.h>

int main()
{
   int num1=0, num2=0, div=0;
   
   printf("\n enter numbers to make division.");
   scanf("%d%d",&num1,&num2);
   
   div=num1/num2;
   
   printf("\n division of %d and %d is %d",num1,num2,div);
   
   return 0;
}