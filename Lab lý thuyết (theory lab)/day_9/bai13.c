#include<stdio.h>
int main(){
 printf("\nNhap so gio: ");
    int gio;
    scanf("%d", &gio);
    if (gio <= 2){
        printf("Tien la: %d", gio * 20000);
    }
    if (gio > 3 && gio <= 10){
        int tien2 = 2*20000 + (gio - 2)*15000;
        printf("Tien la: %d", tien2);
    }
    if (gio > 11 && gio <= 23){
        int tien3 = 2*20000 + 8*15000 + (gio - 10)*10000;
        printf("Tien la: %d", tien3);
    }
    if (gio > 24){
        int tien4 = 2*20000 + 8*15000 + (gio - 10)*10000 + 200000;
        printf("Tien la: %d", tien4);
    }
}
