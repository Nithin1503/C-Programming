#include<stdio.h>
#include<math.h>
int main()
{
   int x1,y1,x2,y2;
   float distance;
printf("Enter the values of (x1,y1) cordinates: ");
scanf("%d %d",&x1,&y1);
if(x1>0 && y1>0)
{
    printf("The point lies in 1st Quadrant\n");
}else if(x1<0 && y1>0)
{
     printf("The point lies in 2nd Quadrant\n");
}else if(x1<0 && y1<0)
{
     printf("The point lies in 3rd Quadrant\n");
}else if(x1>0 && y1<0)
{
     printf("The point lies in 4th Quadrant\n");
}else if(x1==0 && y1==0)
{
     printf("The point lies on Origin\n");
}
printf("Enter the values of 2nd co-ordinate points (x2,y2): ");
scanf("%d %d",&x2,&y2);
distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("Distance = %.2f",distance);

    return 0;

}
