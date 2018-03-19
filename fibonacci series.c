#include<stdio.h>
int main()
{
int i,num,f1=0,f2=1,c;
printf("Enter the range of series:");
scanf("%d",&num);
printf("Fibonacci series:");
for(i=0;i<num;i++)
{
printf("\n%d",f2);
c=f1+f2;
f1=f2;
f2=c;
}
return 0;
}
