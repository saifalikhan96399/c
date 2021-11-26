// A program to get fibonacci series using recursion//
#include<stdio.h>
main()
{
    int fib(int);
    int i,n;
    printf("enter number for fibonicc series");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
       printf("%d\t",fib(i));
    }
    
}
int fib(int n)
{
    if(n==1 || n==2)
    return(1);
   return(fib(n-1)+fib(n-2));
}