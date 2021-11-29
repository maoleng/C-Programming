#include<stdio.h>
int main(){
 printf("\nNhap vao luong va gio: ");
    int m, h;
    scanf("%d%d", &m, &h);
    if (h <= 40){
        printf("Luong la: %d", m*h);
    }
    if (h > 40 && h <= 45){
        int luong2 = m*40 + (h - 40)*m*1.8;
        printf("Luong la: %d", luong2);
    }
    if (h > 45 && h <= 50){
        int luong3 = m*40 + 5*m*1.8 + (h-45)*m*2.5;
        printf("Luong la: %d", luong3);
    }
    if (h > 50){
        int luong4 = m*40 + 5*m*1.8 + 5*m*2.5 + (h-50)*m*2.6;
        printf("Luong la: %d", luong4);
    }
}
