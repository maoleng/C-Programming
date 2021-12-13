// dung de quy tinh giai thua

#include<stdio.h>
int main(){
    int n; printf("Nhap vao so n: "); scanf("%d",&n);

    int giaiThua(int n) {
        
        if (n == 1){
            return 1;
        }else return n * giaiThua(n-1);

    }
    
    printf("%d", giaiThua(n));
}