// tinh 2^n bang de qy
#include<stdio.h>
int main(){
    int n; printf("Nhap vao so n: "); scanf("%d",&n);

    int hai_mu_n(int n){
        if (n == 0){
            return 1;
        }else return 2 * hai_mu_n(n-1);
    }

    printf("%d",  hai_mu_n(n));
}