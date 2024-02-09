//array basic addition
#include<stdio.h>
#include<conio.h>

int main()
{
   int num1=0, num2=0, sum=0;
   
   printf("\n enter numbers to make addition.");
   scanf("%d%d",&num1,&num2);
   
   sum=num1+num2;
   
   printf("\n Sum of %d and %d is %d",num1,num2,sum);
   
   return 0;
}