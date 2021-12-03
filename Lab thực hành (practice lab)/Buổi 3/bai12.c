#include<stdio.h>
#include<math.h>

void kiemtrasonguyento(int so){
    int dem = 0, i = 2;
    for(i =2 ; i< so/2; i++){
        if (so%i==0) dem+=1;
    }
    if (dem==0) {
        printf("Do la so nguyen to");
    }else printf("do khong phai la so nguyen to");

}

int main (){
    int so; printf("Nhap vao so can kiem tra: "); scanf("%d",&so);
    kiemtrasonguyento(so);
}