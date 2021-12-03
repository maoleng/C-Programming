//Nhập n, tính s = 1  + 2+ 3+..+n
#include<stdio.h>

void _sum1toN(int n){
    int i, s = 0;
    for (i = 1; i <= n; i++){
        s += i;
    }
    printf("Sum = %d", s);
}


int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _sum1toN(n);
}