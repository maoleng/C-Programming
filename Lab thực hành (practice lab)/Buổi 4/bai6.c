#include<stdio.h>
void tinhTongSoChan(int n, int mang[]) {
   int s = 0, i;
    for (i = 0; i < n; i++) {
        if (mang[i] % 2 ==0) {    
            s += mang[i];
        }
    }
    printf("\nTong cac so chan trong mang la: %d", s);
}


