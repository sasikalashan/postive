#include<stdio.h>
int main()
{
char a[50];
int i,c,s;
printf("Enter the string:");
scanf("%s",a);
s=strlen(a);
for(i=0;i<a;i++)
{
if(a[i]='1'||a[i]='0')
{
c++;
}
}
if(c==s)
printf("yes");
else
printf("no");
return 0;
}
