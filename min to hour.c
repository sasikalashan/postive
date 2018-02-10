#include<stdio.h>
int main()
{
    int totmin,hours,min;
    printf("Enter the total minutes:");
    scanf("%d",&totmin);
    hours=totmin/60;
    min=totmin%60;
    printf("%d hours %d minutes",hours,min);
    return 0;
    
}
