#include<stdio.h>
int main()
{
long int n,i,sum=0;
printf("Enter the number:");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
sum=n*i;
printf("The first 5 multiples 0f %d:%ld\n",n,sum);
}
return 0;
}
