// To get greater number among 3 numbers using function//
#include<stdio.h>
bigest(int, int, int);
int main()
{
     int num1,num2,num3;
    printf("enter three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("%d,%d and %d bigest is %d\n",num1,num2,num3,bigest(num1,num2,num3));
}
 int bigest(int x, int y, int z)
{
     if (x>y && x>z)
     {
        return(x);
     }
     else
     {
         if (y>z)
         {
             return(y);
         }
         else
         {
             return(z);
         }
         
     }
     
}
