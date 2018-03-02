#include<stdio.h>
int main()
{
int s[100],i,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
printf("%d %d\n",s[i],i);
}
return 0;
}
