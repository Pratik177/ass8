#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("enter a number for matrix 1 :");
    for(i=0;i<=2;i++){
    for(j=0;j<=2;j++)
    scanf(" %d",&a[i][j]);
    }
    printf("enter a number for matrix 2 :");
      for(i=0;i<=2;i++){
    for(j=0;j<=2;j++)
    scanf("%d",&b[i][j]);
    }
    printf("the sum of matrix is :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j] +b[i][j];
            printf(" %d\t",c[i][j]); 
        }
             printf("\n");
        
    }
    return 0;
}