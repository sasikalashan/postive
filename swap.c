#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers:");
scanf("%d %d",&a,&b);
printf("\nBefor swapping the two numbera a=%d b=%d",a,b);
c=a;a=b;b=c;
printf("\nafter swapping a=%d and b=%d",a,b);
  return 0;
  }
