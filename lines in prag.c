#include<stdio.h>
int main()
{
char a[100];
int i,c=0;
printf("Enter the sentence:");
gets(a);
for(i=0;a[i]!='\0';i++)
if(a[i]=='.')
{
c++;
}
printf("The no of line in paragraph:%d",c+1);
return 0;
}
