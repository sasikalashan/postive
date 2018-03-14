#include<stdio.h>
int main()
{
int n,i,a[50],sum=0,avg;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

  sum=sum+a[i];
}  
  printf("sum of n number:%d",sum);
  avg=sum/n;
  printf("The averageis:%d",avg);
  return 0;
}
