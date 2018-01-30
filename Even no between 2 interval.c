#include<stdio. h>
int main()
{
int n,a,b; 
printf("Enter the number:\n");
scanf("%d %d",&a,&b);
printf("The even no between %d to %d:",a,b);
for(n=a;n<=b;n++)
{
if(n%2==0)
printf("%d",n);
}
return 0;
}
