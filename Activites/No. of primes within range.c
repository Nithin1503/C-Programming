#include<stdio.h>
int main()
{
   int num,x,y=0,i,j;
   printf("Enter number: ");
   scanf("%d",&num);
   for( i=2;i<=num;i++)
   {  x=0;
     for( j=1;j<=i;j++)
     {   if(i%j==0)
          {x++;}
     }
     if(x==2)
     {
        y++;
     }
   }
   printf("No of prime numbers within %d is %d",num,y);
    return 0;
}
