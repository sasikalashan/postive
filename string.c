#include<stdio.h>
int main()
{
char a[50],b[50];
int c,d;
printf("Enter the 1st string:");
gets(a);
printf("Enter the 2nd string:");
gets(b);
c=strlen(a);
d=strlen(b);
if(c>d)
{
printf("%s",a);
}
else if(c<d)
{
printf("%s",b);
}
else
{
printf("%s",a);
}
return 0;
}
