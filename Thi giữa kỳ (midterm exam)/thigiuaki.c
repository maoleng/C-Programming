#include<stdio.h>
int main(){
    // Nhập n dương, nếu sai yêu cầu nhập lại
    int n;
    while (n <= 0){
        printf("Nhap sai, nhap lai");
        scanf("%d", &n);
    }
    // s = 1/2! + 1/3! + .. + 1 / (n+1)!
    float S = 0;
    float  phantu = 1;
    int i;
    for (i = 2; i <= n + 1 ; i++){
        int j = 1;
        phantu = 1;
        for (j = 1; j <= i; j++){
            phantu *= j;
        }
        
        S += 1.0/phantu;
    } 
    printf("S = %.6f", S);
}