#include<stdio.h>

void ham(n){
    int kiemtra, s = 0, i;
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

int main(){
    int  n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    ham(n);

}