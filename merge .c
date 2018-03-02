#include <stdio.h>
int main()
{
int s[100],i,j,k,l,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(j=0;j<n;j++)
{
for(k=j+1;k<n;k++)
{
if(s[j]>s[k])
{
l=s[j];
s[j]=s[k];
s[k]=l;
}
}
}
printf("%d",l);
return 0;
}
