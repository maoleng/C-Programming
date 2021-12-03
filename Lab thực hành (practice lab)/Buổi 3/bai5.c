//Hàm tìm chữ số đầu và cuối

#include<stdio.h>

void _findFirstNum(int n){
    while (n >= 10){
        n /= 10;
    }
    printf("First num is: %d", n);
}

void _findLastNum(int n){
    n = n % 10;
    printf("\nLast num is: %d", n);
}
int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _findFirstNum(n);
    _findLastNum(n);
}