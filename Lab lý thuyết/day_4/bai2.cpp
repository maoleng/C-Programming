#include<stdio.h>
#include<math.h>
int main (){
    int so,dem=0; printf("Nhap vao so can kiem tra: "); scanf("%d",&so);
    for(int i =2 ; i<sqrt(so); i++){
        if (so%i==0) dem+=1;
    }
    if (dem==0) {
        printf("Do la so nguyen to");
    }else printf("do khong phai la so nguyen to");

}
