#include<stdio.h>
int main()
{
int b,i,t=0;
printf("Enter the number");
scanf("%d",&b);
for(i=1;i<=b;i++)
{
if(b%i==0)
{
t++;
}
}
if(t==2)
printf("The %d is prime",b);
else
printf("The %d is not prime",b);
return 0;
}
