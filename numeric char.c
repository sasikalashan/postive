#include<stdio.h>
int main()
{
char a[100];
int i,c=0;
printf("Enter the sentence:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='0')&&(a[i]<='9'))
c++;
}
printf("The numeric char in sentence:%d",c);
return 0;
}
