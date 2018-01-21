#include<stdio.h>
int main()
{
int i,b,sum=0;
printf("Enter the number:");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
sum=sum+i;
}
printf("The sum of number is:%d",sum);
return 0;
}
