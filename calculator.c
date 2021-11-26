 //A program to make small calculator using function//
#include<stdio.h>
int add(int x, int y);
int mul(int x, int y);
int sub(int x, int y);
int div(int x, int y);
main()
{
    int choice,num1,num2,sum1,sub1,mul1,div1;
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d",&choice);
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    switch (choice)
    {
    case 1: sum1=add(num1,num2);
            printf("your sum is=%d\n",sum1);
        break;
    case 2: sub1=sub(num1,num2);
           printf("your subtraction is=%d\n",sub1);     
        break;
    case 3: mul1=mul(num1,num2);
         printf("your multiplication is=%d\n",mul1);
        break;
    case 4: div1=div(num1,num2);
            printf("your division is=%d\n",div1);
        break;             
    }
}   
//addition
int add(int x, int y)
{
    int z;
    z = x+y;
    return(z);
}
//subtraction
int sub(int x, int y)
   {  int z;
     z = x-y;
     return(z);
   }
//multiplication   
int mul(int x, int y)
{
    int z;
    z = x*y;
    return(z);
}
//division   
int div(int x, int y)
{
    int z;
    z = x/y;
    return(z);
}
