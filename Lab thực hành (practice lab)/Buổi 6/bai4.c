// tinh 2^n bang de qy
#include<stdio.h>
int main(){
    int n; printf("Nhap vao so n: "); scanf("%d",&n);
    int x; printf("Nhap vao so x: "); scanf("%d",&x);


    int tinh_x_mu_n(int n, int x){
        if (n == 0) {
            return 1;
        }else return x * tinh_x_mu_n(n-1, x);

    }

    printf("%d",  tinh_x_mu_n(n, x));
}