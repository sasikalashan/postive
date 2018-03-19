#include<stdio.h>
int main()
{
char a[100];
int i,c=0,digit=0;
printf("Enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c++;
}
if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
{
digit++;
}
}
if(c>=1&&digit>=1)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
