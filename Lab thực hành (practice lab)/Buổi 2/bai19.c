#include<stdio.h>
int main(){
    int n;
    do {
        printf("Nhap vao so n: ");
        scanf("%d",&n);
    }while (n <= 0);
    int i, s = 1;
    for (i = 1; i <= n; i++){
        s *= i;
    }
    printf("Giai thua la: %d", s);
}