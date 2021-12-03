//hàm tính tổng từng chữ số trong 1 số
#include<stdio.h>

int _sumDigitOfNum(int n){
    int num, sum = 0;
    while (n > 0){
        num = n % 10;
        sum += num;
        n /= 10;
    }
    printf("Sum digit of num: %d", sum);
}

int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _sumDigitOfNum(n);
}