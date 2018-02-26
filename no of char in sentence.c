#include<stdio.h>
int main()
{
char b[100];
int c=0,i;
printf("Enter the sentence:");
gets(b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]!=' ')
{
c++;
}
}
printf("The no of character in sentence:%d",c);
return 0;
}
