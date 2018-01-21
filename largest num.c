#include<stdio.h>
int main()
{
int l,m,n;
printf("Enter the nuumber:\n");
scanf("%d %d %d",&l,&m,&n);
if((l>m)&&(l>n))
printf("%d is large",l);
else if((m>l)&&(m>n))
printf("%d is large",m);
else
printf("%d is large",n);
return 0;
}
