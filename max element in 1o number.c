#include<stdio.h>
int main()
{
int s[100],n;
int i,max;
printf("Enter the size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
printf("%d\n",s[i]);
}
max=s[0];
for(i=1;i<n;i++)
{
if(max<s[i])
{
max=s[i];
s[i]=max;
}
}
printf("The max element out of 10 number is:%d",max);
return 0;
}
