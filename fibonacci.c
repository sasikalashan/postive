#include<stdio.h>
int main()
{
int i,a1=0,a2=1,d,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",a1);
d=a1+a2;
a1=a2;
a2=d;
}
return 0;
}
