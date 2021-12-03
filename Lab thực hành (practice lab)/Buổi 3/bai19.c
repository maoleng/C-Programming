#include<stdio.h>

void _factoriesOfN(int n){
    int i, s = 1 ;
    for (i = 1; i <= n; i++){
        s *= i;
    }
    printf("Factory Of n is : %d", s);
} 


int main(){
    printf("Nhap vao so n: ");
    int n;
    scanf("%d",&n);
    _factoriesOfN(n);
}