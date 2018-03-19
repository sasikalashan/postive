#include<stdio.h>
int main()
{
int i,max,a[50];
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(max<a[i])
{
max=a[i];
a[i]=max;
}
}
printf("The max element:%d",max);
return 0;
}
