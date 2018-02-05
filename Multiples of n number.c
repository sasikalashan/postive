#include<stdio.h>
int main()
{
long int n,i,sum=0;
printf("Enter the number:");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
sum=n*i;
printf("%ld\n",sum);
}
return 0;
}
