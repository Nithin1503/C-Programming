#include<stdio.h>
int set_bit( int x,int y)
{
    x=x|(1<<y);
    return x;

}
int rest_bit(int x,int y)
{
    x=x&(~(1<<y));
    return x;
}
int flip_bit(int x,int y)
{
    x=x^(1<<y);
    return x;
}
int query_bit(int x,int y)
{
  x=x&(1<<y);
  if(x>=1)
  {
    return 1;
  }else
  {
   return 0;
  }

}
int main ()
{   int opt;
    int num,pos;
    printf("Enter number:");
    scanf(" %X",&num);
    printf("Enter the pos:");
    scanf(" %d",&pos);
    printf("Enter 1 to set bit \n");
    printf("Enter 2 to reset bit \n");
    printf("Enter 3 to flip bit \n");
    printf("Enter 4 to query bit \n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
     printf("%X",set_bit(num,pos));
    break;
    case 2:
    printf("%X",rest_bit(num,pos));
    break;
    case 3:
    printf("%X",flip_bit(num,pos));
    break;
    case 4:
    printf("%X",query_bit(num,pos));
    break;
    default :
    printf("Entered wrong input");

    }
    return 0;
    }

