#include<stdio.h>
int main()
{
char d[100];
int i,c=0;
printf("Enter the character:");
gets(d);
for(i=0;d[i]!='\0';i++)
if(d[i]==' ')
{
c++;
}
printf("The no of space in sentence:%d",c);
return 0;
}
