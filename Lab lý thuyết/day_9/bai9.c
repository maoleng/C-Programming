#include<stdio.h>
int main() {
    printf("Nhap vao ma khach hang: ");
    int n, dem = 0;
    scanf("%d", &n);
    int n2 = n;
    while (n > 0){
        n /= 10;
        dem += 1;
    }
    if (dem != 5) {
        printf("\nNhap sai");
        return 0;
    }
    while (n2 > 100){
        n2 /= 10;
    }
    n2 %= 10;
    if (n2 >= 0 && n2 <= 2){
        printf("\nDong");
    }
    if (n2 >= 3 && n2 <= 5){
        printf("\nBac");
    }
    if (n2 >= 6 && n2 <= 7){
        printf("\nVang");
    }
    if (n2 >= 8 && n2 <= 9){
        printf("\nBach kim");
    }
}