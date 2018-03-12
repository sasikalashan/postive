#include<stdio.h>
int main()
{
int n,c;
printf("Entyer the number:");
scanf("%d",&n);
while(n!=0)
{
 n=n/10;
 c++;
 }
 printf("digites on number:%d",c);
 return 0;
 }
