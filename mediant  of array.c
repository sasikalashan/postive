#include<stdio.h>
int main()
{
int a[50],i,j=0,n,m;
printf("Enter the size:");
scanf("%d",&n);
printf("The %d element:\n",n);
for(i=0;i<n;i++) 
{
scanf("%d",&a[i]);
  j=j+a[i];
  }m=j/n;
  printf("The medium element:%d",m);
return 0;
}
