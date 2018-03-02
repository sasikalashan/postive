#include<stdio.h>
int main()
{
int l,m,n,o,p,hour,minutes;
printf("Enter the 1st hr & minu:");
scanf("%d %d",&l,&m);
printf("Enter the 2nd hr & minu:");
scanf("%d %d",&n,&o);
if(l>n)
{
hour=l-n;
}
else
{
hour=n-l;
}
if(m>o)
{
minutes=m-o;
}
else
{
minutes=o-m;
}
printf("hr & minutes:%d %d",hour,minutes);
return 0;
}
