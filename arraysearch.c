#include<stdio.h>
main()
{
    int a[10],s,i,k;
    printf("enter elements in array=");
    for(i=0;i<9;i++)
      {
          scanf("\n%d",&a[i]);
      }
      printf("search an element in array");
      scanf("%d",&s);
       for(i=0;i<9;i++)
       {
           if(a[i]==s)
          {
              printf("data is present in array");
              k=1;
              break;
          }  
          if(k==0)
          {
             printf("data is not present in array");
          }      
       }    
}      