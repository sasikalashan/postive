#include<stdio.h>
int main()
{
int a[50],i,j,n,m;
printf("Enter the size:");
scanf("%d",&n);
printf("The %d element:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;
}
}
}
printf("%d\t",a[i]);
printf("the 2 nd large number:%d",a[n-2]);
return 0;
}
