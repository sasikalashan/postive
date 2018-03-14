#include<stdio.h>
int main()
{
int n,flag=0;
printf("Enter the number:");
scanf("%d",&n);
while(n!=1)
{
if(n%2!=0)
{
flag=1;
break;
}
n=n/2;
}
if(flag==0)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
