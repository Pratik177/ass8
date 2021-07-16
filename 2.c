#include<stdio.h>
int main()
{
    int a[2][3],i,j,sum=0,s=0;
    printf("enter a number for 2 x 3\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("a[%d%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
    {
        sum = sum +a[i][j];
    }
    printf("the sum of %d row is =%d\n",i+1,sum-s);
    s=sum;
    }
    return 0;
}