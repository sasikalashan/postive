#include<stdio.h>
int main()
{
int l,m,t;
printf("Enter the two number:");
scanf("%d %d",&l,&m);
printf("Before swapping l=%d & m=%d",l,m);
t=l;
l=m;
m=t;
printf("After swapping l=%d & m=%d",l,m);
return 0;
}
