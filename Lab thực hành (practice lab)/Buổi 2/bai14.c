#include<stdio.h>
int main(){
    printf("Nhap vao so n: ");
    int n, i, s = 0;
    scanf("%d",&n);

    for (i = 1; i < n; i++){
        if (n % i == 0){
            s += i;
        }
    }
    if (s == n){
        printf("Do la so hoan hao");
    }
    else printf("DO khong la so hoan hao");
}