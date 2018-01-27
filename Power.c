#include<stdio.h>
int main()
{
int a,b,c,res=1;
Printf("Enter the a and b /n");
scanf("%d %d",&a,&b);
for(c=0;c<b;c++)
{
res=res*a;
}
Printf("%d^%d=%d",&a,&b,&res);
return 0;
}
