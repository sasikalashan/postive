#include<stdio.h>
int main()
{
int a,b,i,res;
printf("Enter tha value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
i=1;
res=1;
while(i<=b)
{
res=res*a;
i++;
}
printf("The power of %d^%d=%d",a,b,res);
return 0;
}
