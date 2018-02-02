#include<stdio.h>
int main()
{
int n,a,b,temp,sum,rem;
printf("enter the number:");
scanf("%d %d",&a,&b);
printf(" The armstrong number between %d to %d:",a,b);
for(n=a+1;n<=b;n++)
{
sum=0;
temp=n;
while(temp!=0)
{
 rem=temp%10;
 sum=sum+(rem*rem*rem);
 temp=temp/10;
 }
 if(n==sum)
 printf("%d\n",n);
 }
 return 0;
 }
