#include<stdio.h>
int so,songuoc;
int kiemtra(int n){
    int n2 = n;
    while (n > 0){
        so = n % 10;
        songuoc = songuoc*10 + so;
        n /= 10;
    }
    if (n2 == songuoc){
        printf("Do la so doi xung");
    }
    else printf("Do khog la xau doi xung");
}

int main(){
    int n;  printf("Nhap vao so n: "); scanf("%d",&n);
    kiemtra(n);
}
