#include<stdio.h>
int main()
{
int i,n,a,d,tn,sum=0;
printf("enter the number:");
scanf("%d",&n);
printf("enter the intial term:");
scanf("%d",&a
printf("Enter the difference element:");
scanf("%d",&d);
sum=(n(2a+(n-1)d))/2;
tn=a+(n-1)d;
for(i=0;i<=tn;i=i+d)
{
if(i!=tn)
{
printf("%d+",i);
}
else
{
print("%d=%d",i,sum);
}
return 0;
}


