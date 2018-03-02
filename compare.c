#include<stdio.h.
int main()
{
char a[100],b[100];
int i,j;
printf("Enter the 1st string:");
gets(a);
printf("Enter the 2nd strig:");
gets(b);
for(i=0;a[i]!='\0';i++)
{
  for(j=0;b[j]!'\0';j++)
  {
  a[i]=a[j];
  }
  a[i]='\0';
}
printf("%s",a);
return 0;
}
