#include<stdio.h>
#include<string.h>

void daoNguocChuoi(){
    char chuoi;
    scanf("%c", &chuoi);
    if (chuoi != '\n'){
        daoNguocChuoi(chuoi);
        printf("%c", chuoi);
    }
}

int main(){
    printf("Nhap vao chuoi: ");
    daoNguocChuoi();
}