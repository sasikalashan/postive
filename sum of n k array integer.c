#include<stdio.h>
int main()
{
int n,k,i,a[50],sum;
printf("The value of n and k:");
scanf("%d %d",&n,&k);
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=k;i++)
{
sum=sum+a[i];
}
printf("sum is:%d",sum);
return 0;
}
