include<stdio.h>
int main()
{
int s,t,rev=0,rem;
printf("Enter the number:");
scanf("%d",&s);
t=s;
while(s>0)
{
rem=s%10;
rev=rev*10+rem;
s=s/10;
}
if(t==rev)
printf("The %d is palindrome",t);
else
printf("The %d is not palindrome",t);
return 0;
}
