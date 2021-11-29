#include <stdio.h>
int main (){

    int i,n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    int s = 0;
    for (i = 2 ; i <= n; i=i+2)
    s = s + i;
    printf("Tong la %d", s);
}