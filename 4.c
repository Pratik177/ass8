#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter a number for 3 x 3 :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(a[0][0] < a[i][j]){
                a[0][0]=a[i][j];
                
            }
        }
    }
    printf("the max num is :%d\n",a[0][0]);printf("\n");
    a[3][3]=a[0][0];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
   
    printf("%d\t",a[3][3]);
    }
    printf("\n");
    }
    
    return 0;
}