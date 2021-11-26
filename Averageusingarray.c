#include<stdio.h>
void main()
{
    int a[5],i,sum=0,avg;
    printf("enter five number");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=1;i<=5;i++)
      {
          sum= sum+a[i];
      }
      avg = sum/5;
    printf("\n average of 5 number = %d",avg);
}