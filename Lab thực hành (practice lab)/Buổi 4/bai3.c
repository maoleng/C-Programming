#include<stdio.h>

void nhapVaoMang(int n, int mang[]) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

