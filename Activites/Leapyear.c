#include<stdio.h>
int leapyear(int y)
{   if(y%100==0)
    {
        if(y%400==0)
        {
            return 1;
        }
    }else if (y%4==0)
    {
        return 1;
    }

}
int main ()
{
    int x;
    printf("Enter the year to check Leap year or not:");
    scanf("%d",&x);
    int y=leapyear(x);
     if(y==1)
     {
         printf("%d is a Leap Year", x);
     }
     else
     {
         printf("%d is a  not Leap Year", x);
     }
    return 0;

}
