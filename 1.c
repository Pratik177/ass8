#include<stdio.h>
int main()
{
   int a[3][3],i,j,sum=0,avg;
   printf("enter a number for 3x3\n");
   for(i=0;i<=2;i++){
       for(j=0;j<=2;j++)
       {printf("a[%d%d]=",i,j);
       scanf("%d",&a[i][j]);}
   }
   for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
           sum =sum + a[i][j];
           avg =sum/9;
       }
   }
   printf("sum is = %d  ",sum);
   printf("\nthe avg is =% d  ",avg);
   return 0;
}
