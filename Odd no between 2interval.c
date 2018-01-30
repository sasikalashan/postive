#include<stdio.h>
int main()
{
int n,a,b;
printf("Enter the number:\n");
scanf("%d %d",&a,&b);
printf("print odd no between %d to %d",a,b);
for(n=a;n<=b;n++)
{
if(n%2==1)
printf("%d\n",n);
}
return 0;
}
