#include<stdio.h>
int main()
{
int s[100];
int i,max;
for(i=0;i<10;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<10;i++)
{
printf("%d\n",s[i]);
}
max=s[0];
for(i=1;i<10;i++)
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
