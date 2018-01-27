#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the array size");
    scanf("%d",&n );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
