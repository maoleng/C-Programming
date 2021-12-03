#include<stdio.h>
void kiemtrasohoanhao(int n){
    int i, s = 0;
    for(i = 1; i < n; i++ ){
        if (i % 2 == 0){
            s += i;
        }
    }
    if (s ==n){
        printf("Do la so hoan hao;");
    }
    else printf("Do khong la so hoan hao");
}

int main(){
    int n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    kiemtrasohoanhao(n);
}