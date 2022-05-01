#include<stdio.h>
int prime(int n)
{    int count=0, i;
    for(i=1;i<=n;i++)
   {
        if(n%i==0)
        count++;
   }
return count;
}
int main ()
{   int n;
   printf("Enter number to check whether prime or Not: ");
   scanf("%d",&n);
    int check=prime(n);
   if(check==2)
   {
       printf("%d is a Prime number", n);
   }
   else
   {
       printf("%d is Not a prime number",n);
   }
    return 0;
}
