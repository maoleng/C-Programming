#include<stdio.h>
void daoNguocMang(int n, int mang[]) {
    int i;
    printf("\nMang dao nguoc la");
    for (i = n - 1 ; i >= 0; i--) {
        printf("%d \t", mang[i]);
    }
}
