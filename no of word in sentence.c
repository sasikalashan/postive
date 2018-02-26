#include<stdio.h>
int main()
{
char a[100];
int c=0,i;
printf("Enter the sentence:");
gets(a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
{
c++;
}
}
printf("The number of word in sentence:%d",c+1);
return 0;
}
