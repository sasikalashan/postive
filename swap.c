#include<stdio.h>
int main()
{
int l,m;
printf("Enter the numbers:");
scanf("%d %d",&l,&m);
printf("\nBefor swapping the two numbera l=%d m=%d",l,m);
l=l^m;m=l^m;l=l^m;
printf("\nafter swapping l=%d and m=%d",l,m);
  return 0;
  }
