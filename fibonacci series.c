#include<stdio.h>
int main()
{
int i,num,f1=0,f2=1,c;
printf("Enter the range of series:");
scanf("%d",&num);
printf("Fibonacci series:");
for(i=1;i<num;i++)
{
printf("\n%d",f1);
c=f1+f2;
f1=f2;
f2=c;
}
return 0;
}
