#include<stdio.h>
int main()
{
  int a,count=0;
  printf("Enter a number: ");
  scanf("%d",&a);
  while(a)
  {
      a=a/10;
      count++;
  }
  printf("Total digits is:  %d",count);
  return 0;
}
