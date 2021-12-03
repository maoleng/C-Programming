#include<stdio.h>
void tinhTongSoAm(int n, int mang[]) {
   int s = 0, i;
    for (i = 0; i < n; i++) {
        if (mang[i] < 0) {    
            s += mang[i];
        }
    }
    printf("\nTong cac so am trong mang la: %d", s);
}



