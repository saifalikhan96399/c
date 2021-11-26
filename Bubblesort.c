#include<stdio.h>
void bubble_sort(int a[], int s );
void main()
{
    int a[]={34,15,29,5,54,23,8,16,19};
    int i;
    bubble_sort(a,9);
    for(i=0;i<=8;i++)
    printf("%d\t",a[i]); 
}
  void bubble_sort(int a[],int n)
{
    int round,i,temp;
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=n-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
        }
    }
}