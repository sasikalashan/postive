#include<stdio.h>
int main()
{
int n,a,b,d;
printf("Enterthe number:");
scanf("%d %d",&a,&b);
printf("The prime number between %d to %d:",a,b);
for(n=a;n<=b;n++)
{
 for(d=2;d<n;d++)
 {if(n%d==0)
 break;
 }
 {
 if(d==n)
 printf("%d\n",n);
 }
 }
 return 0;
 }
