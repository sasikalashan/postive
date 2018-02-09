#include<stdio.h>
int main()
{
int a[100],i,min,size;
printf("Enter the array size:");
scanf("%d",&size);
  printf("The %d element:",size);
for(i=0;i<=size;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<=size;i++)
{
if(a[i]<min)
{
min=a[i];
}
printf("The mn element":%d",min);
}
return 0;
}
