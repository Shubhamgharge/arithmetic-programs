//array basic multiplication
#include<stdio.h>
#include<conio.h>

int main()
{
   int num1=0, num2=0, mult=0;
   
   printf("\n enter numbers to make multiplication.");
   scanf("%d%d",&num1,&num2);
   
   mult=num1*num2;
   
   printf("\n multiplication of %d and %d is %d",num1,num2,mult);
   
   return 0;
}