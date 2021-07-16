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
    printf("the matrix is :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            b[i][j] = a[i][j];
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
         
         for(i=0;i<=2;i++){
             for(j=0;j<=2;j++){
                 sum = a[0][0] +a[0][2]+a[1][1]+a[2][2] +a[2][0];
             }
         }
         printf("sum %d=",sum);   
    
    return 0;
}