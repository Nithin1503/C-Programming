#include<stdio.h>
int checktype(int x, int y, int z)
{  
    if(x==y && y==z)
    {
    	printf("The triangle is Equilateral");
    }
    else if(x==y || y==z || z==x)
    {
    	printf("The triangle is Isosceles"); 
	}
	else if(x+y+z==180) 
     {
         
          if(x==90 || y==90 || z==90)
          {
               printf("The triangle is Right Angle Triangle"); 
          }
         
     }
	else if(x!=y && y!=z && z!=x)
	{
		printf("The triangle is Scalene");
	}
	
}
int main()
{
	int x,y,z;
	printf("Enter the values of sides x,y,z:");
	scanf("%d\n %d\n %d", &x,&y,&z);
	checktype( x, y, z);
	
}
