//Hàm in ra chẵn từ 1 tới n
#include<stdio.h>

void _sumEvenNum(int n){
    int i, s = 0;
    for (i = 1; i <= n; i++){
        if (i % 2 == 0){
            s += i;
        }
    }
    printf("Sum is: %d", s);
}


int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _sumEvenNum(n);
}