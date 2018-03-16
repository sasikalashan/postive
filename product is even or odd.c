#include<stdio.h>
int main()
{
int a,b,product;
printf("Enter the 2 number:");
scanf("%d %d",&a,&b);
product=a*b;
printf("product is:%d\n",product);
if(product%2==0)
{
printf("The product is even");
}
else
{
printf("The product is odd");
}
return 0;
}
