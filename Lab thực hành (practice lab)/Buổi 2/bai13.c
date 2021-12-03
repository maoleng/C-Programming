#include<stdio.h>
#include<math.h>
int demso(int n){
    int dem = 0;
    while (n > 0){
        n /= 10;
        dem += 1;
    }
    return dem;
}
void tinhluythua(int n){
    int socuoicung, kiemtra = 0, n2 = n, biendemso = demso(n);
    while (n > 0){
        socuoicung = n % 10;
        n /= 10;
        kiemtra = kiemtra + pow(socuoicung, biendemso);
    }
    if (kiemtra == n2) printf("Do la so armstrong");
    else printf("Do khong phai la so artmsrtong");
}   

int main(){
    int a; printf("Nhap vao so a: "); scanf("%d",&a);
    tinhluythua(a);
}


