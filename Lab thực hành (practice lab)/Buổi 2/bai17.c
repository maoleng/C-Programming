#include<stdio.h>
int main(){
    int i, n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    int kiemtra, s = 0;
    for (i = 1; i < n; i++){
        int j = 0;
        for (j = 1; j < i; j++){
            if (i % j == 0){
                s += j;
            }
        }
        if (s == i){
            printf("%d\t", i);
        }
        s = 0;
    }

}