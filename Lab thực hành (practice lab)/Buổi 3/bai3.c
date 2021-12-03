//Viết chương trình in ra bảng cửu chương

#include<stdio.h>

void _tableOfNum(int n){
    int i;
    for (i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}



int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    _tableOfNum(n);
}