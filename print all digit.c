#include<stdio.h>
int main()
{
int b,a[100],i=0,t=0,j;
printf("enter the number:");
scanf("%d",&b);
while(b>0)
{
t=b%10;
b=b/10;
a[i]=t;
i++;
}
for(j=i-1;j>=0;j--)
printf("%d ",a[j]);
return 0;
}
