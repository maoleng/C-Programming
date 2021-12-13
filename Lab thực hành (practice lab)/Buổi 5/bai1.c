#include<stdio.h>
#include<string.h>

void doDaiChuoi(char chuoi[]){
    int i, doDai = 0;
    for (i = 0; chuoi[i] != '\0'; i++){
        doDai++;
    }
    printf("Do dai chuoi la: %d", doDai);
}
 
int main(){
    char chuoi[50];
    printf("Nhap vao chuoi: ");
    gets(chuoi);
    doDaiChuoi(chuoi);
}