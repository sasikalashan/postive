#include<stdio.h>
int main()
{
    int i ,j,a[40][40],b[40][40],c[i][j];
    printf("Enter the first matrix");
    for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
     {
        scanf("%d",&a[i][j]);
     }
    }
    printf("Enter sec matrix");
    for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
     {
        scanf("%d",&b[i][j]);
     }
    }
    for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
     {
      c[i][j]=a[i][j]+b[i][j];
     }
    }
    for(i=0;i<4;i++)
    printf("\n");
    {
     for(j=0;j<4;j++)
     {
        printf("%d\t",c[i][j]);
     }
    }
}

