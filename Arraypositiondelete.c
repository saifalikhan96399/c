#include<stdio.h>
main()
{
    int a[10],position,n,i;
    printf("enter number of element in arry\n");
    scanf("%d",&n);
    printf("enter %d element\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position where you want to delete an element\n");
    scanf("%d",&position);
    if (position>=n+1)
    {
        printf("deletion not possible\n");
    }
    else
    {
      for(i=position-1;i<n-1;i++)  
        a[i]= a[i+1];
    }
    printf("resultant array:\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }
}