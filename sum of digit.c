#include<stdio.h>
int main()
{
int n,sum=0,i,b;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
while(n!=0)
{
b=n%10;
sum=sum+b;
n=n/10;
}
printf("sum of digits:%d",sum);
}
return 0;
}
