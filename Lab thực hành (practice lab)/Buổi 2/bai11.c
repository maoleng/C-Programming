#include<stdio.h>
int main(){
    //kiểm tra có phải số đối xứng
    int i, n, xau = 0, socuoi; 
    printf("Nhap vao so n: "); scanf("%d",&n);
    int n1 = n;
    while(n > 0){
        socuoi = n % 10;
        xau = xau * 10 + socuoi;
        n /= 10;
    }
    if (n1 == xau){
        printf("Do la so doi xung");
    }
    else 
        printf("Do khong la so doi xung");
}