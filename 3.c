#include<stdio.h>
int main()
{
    int a[3][5],i,j,sum=0,sum1=0;
    printf("enter a number for 3 x  5\n");
    for(i=0;i<=2;i++)
    {
        for (j=0;j<=4;j++)
        {
            printf("a[%d%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<=4;j++)
    {
        for(i=0;i<=2;i++)
        {
            sum =sum +a[i][j];
        }
        printf("the sum of %d colom is =%d\n",j+1,sum-sum1);
        sum1 = sum; 
    }
    return 0;
}