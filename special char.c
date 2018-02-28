#include<stdio.h>
int main()
{
char a[100];
int i,c=0;
printf("Enter the paragraph:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='!'||a[i]=='$'||a[i]=='*'||a[i]=='@'||a[i]=='^'||a[i]=='%'||a[i]==' '||a[i]=='?'||a[i]=='#')
{
c++;
}
}
printf("The no of special char:%d",c);
return 0;
}
