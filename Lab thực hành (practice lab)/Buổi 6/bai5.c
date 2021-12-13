// dem cac chu so trong 1 so
#include<stdio.h>

int main() {
    int n; printf("Nhap vao so n: "); scanf("%d",&n);
    
    int demSoChuSo(int n) {
        if (n < 10) return 1;
    else
        return 1 + demSoChuSo(n / 10);
    }
     
    printf("%d", demSoChuSo(n));
    
}