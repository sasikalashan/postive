#include<stdio.h>
int main()
{
int year;
printf("enter the year:",year);
scanf("%d",&year);
if(year%4==0)
printf("leap year",year);
else
printf("not leap year",year);
return 0;
}
