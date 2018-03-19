#include<stdio.h>
int main()
{
char a[100];
int n,i;
printf("Enter the string:");
gets(a);
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c"a[i]);
}
return 0;
}
