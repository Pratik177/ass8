#include<stdio.h>
int main()
{
     int a[3][3],i,j,b[3][3],sum=0;
    printf("enter a number for 3 x 3 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("a[%d%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("the initial matrix is :\n");
        for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            b[i][j] = a[i][j];
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
    
    printf("the tranpose of  matrix is :\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        {
            b[i][j] = a[i][j];
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
    return 0;
}


       