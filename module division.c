//array basic modul division
#include<stdio.h>
#include<conio.h>

int main()
{
   int num1=0, num2=0, mdiv=0;
   
   printf("\n enter numbers to check reminder.");
   scanf("%d%d",&num1,&num2);
   
   mdiv = num1 % num2;
   
   printf("\n reminder of %d and %d is %d",num1,num2,mdiv);
   
   return 0;
}