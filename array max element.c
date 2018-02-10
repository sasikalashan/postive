#include<stdio.h>
int main()
{
int a[100],i,max,size;
printf("Enter the array size:");
scanf("%d",&size);
  printf("The %d element:",size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<size;i++)
{
if(max<a[i])
{
max=a[i];
  a[i]=max;
}
}
printf("the max element is:%d",max);
return 0;
}
