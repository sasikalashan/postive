#include<stdio.h>
int main()
{
int a,nearest=0;
printf("Enter the number:");
scanf("%d",&a);
if(a%2==1)
{
nearest=a-1;
printf("The nerest nuber:%d",nearest);
}
else
{
printf("number:%d",a);
}
return 0;
}
