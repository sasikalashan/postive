#include<stdio.h>
int main()
{
int a[50],i,n,j,m;
printf("Enter the size:");
scanf("%d",&n);
printf("The %d elements:\t",n);
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
m=a[i];
a[i]=a[j];
a[j]=m;
}
}
}
printf("The sorted element:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

return 0;
}
