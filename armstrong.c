#include<stdio.h>
int main()
{
    int n,t,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum+(r*r*r);
        t=t/10;
    }
    if(sum==t)
    printf("yes");
    else
    printf("no");
    return 0;

}
