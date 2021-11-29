#include<stdio.h>

int main (){
    int i,s,n;
    s =0;


    printf("Nhap vao so n: ");
    scanf("%d",&n);

    for ( i = 0 ; i <= n ; i++)

    s = s + i;
    printf("Tong la :  %d ", s);
}