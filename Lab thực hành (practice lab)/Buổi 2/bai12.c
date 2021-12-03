#include<stdio.h>
int main(){
    int n, dem = 0;
    do{
        printf("Nhap vao so n: "); 
        scanf("%d",&n);
    } while (n<=0);
    int i;
    for (i = 2; i < n/2; i++){
        if (n % i == 0){
            dem += 1;
        }
    }
    if (dem == 0){
        printf("Do la so nguyen to");
    }
    else printf("Do khong la so nguyen to");
}