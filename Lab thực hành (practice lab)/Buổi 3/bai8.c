//Hàm đếm số chữ số

#include<stdio.h>

void _countNum(int n){
    int count = 0;
    while (n > 0){
        n /= 10;
        count += 1;
    }
    printf("Count num is %d", count);
}

int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _countNum(n);
}