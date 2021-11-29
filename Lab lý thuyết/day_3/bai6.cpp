
#include<stdio.h>
int main(){
    int n;
    int so;

    int s = 0; printf("Nhap n: "); scanf("%d",&n);
    for(;n!=0;){
        so = n % 10;
        s += so;
        n /= 10;
    }    
    printf("%d",s);
}