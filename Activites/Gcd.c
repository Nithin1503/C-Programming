#include <stdio.h>
int gcd(int x,int y){
    int GCD;
    for(int i=1;i<=x && i<=y;++i){
        if(x%i==0 && y%i==0){
            GCD= i;
        }
    }
    printf("GCD: %d\n",GCD);
}

int main(){
    int x,y;
    printf("First number: ");
    scanf("%d",&x);
    printf("Secound number: ");
    scanf("%d",&y);
    gcd(x,y);
    return 0;
}
