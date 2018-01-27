#include<stdio.h>
int main()
{
    int n,t,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(t=n;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }
    if(sum==t)
    printf("yes",t);
    else
    printf("no",t);
    return 0;

}
