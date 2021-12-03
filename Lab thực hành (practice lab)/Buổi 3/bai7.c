//hàm tính tổng từng chữ số trong 1 số
#include<stdio.h>

int _productDigitOfNum(int n){
    int num, dup = 1;
    while (n > 0){
        num = n % 10;
        dup *= num;
        n /= 10;
    }
    printf("Product digit of num: %d", dup);
}

int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _productDigitOfNum(n);
}