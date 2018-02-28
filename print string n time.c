#include<stdio.h>
int main()
{
char a[10];
int i,n;
printf("Enter the string:");
gets(a);
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("\n%s",a);
return 0;
}
