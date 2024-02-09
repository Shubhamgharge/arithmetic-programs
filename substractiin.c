//array basic substractiin
#include<stdio.h>
#include<conio.h>

int main()
{
   int num1=0, num2=0, sub=0;
   
   printf("\n enter numbers to make substractin.");
   scanf("%d%d",&num1,&num2);
   
   sub=num1-num2;
   
   printf("\n Substraction of %d and %d is %d",num1,num2,sub);
   
   return 0;
}