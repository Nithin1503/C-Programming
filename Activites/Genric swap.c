#include<stdio.h>
void swap(void *x, void *y, int size)
{
    char temp;
    int i;
    char *p1 = (char*)x;
    char *p2 = (char*)y;
    
    for(i=0;i<size;i++)
    { temp=p1[i];
      p1[i]=p2[i];
      p2[i]=temp;}
      
      
}
int main()
{
  int a=4, b=20, i;
  char c='B', d='A';
  float e=1.5, f=2.5;
  int a1[3]={1,2,3}, a2[3]={4,5,6};
  swap(&a, &b, sizeof(a));
  printf("%d %d\n", a,b);
  swap(&c, &d, sizeof(c));
  printf("%c %c\n", c,d);
  swap(&e, &f, sizeof(e));
  printf("%.2f %.2f\n", e,f);
  swap(a1,a2,sizeof(a1));
  for(i=0;i<3;i++)
  {
    printf("%d %d\n", a1[i],a2[i]);
  }
  
  
  }
