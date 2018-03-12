#include<stdio.h>
int main()
{
int a[50],i,j,t,n;
printf("Enter the size:");
scanf("%d",&n);
printf("The %d number is:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("The minnumber:%d",a[0]);
printf("The max number:%d",a[n-1]);
return 0;
}
