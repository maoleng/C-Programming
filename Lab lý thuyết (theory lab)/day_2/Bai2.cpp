#include<stdio.h>

int main(){
    int i , n;
    int s = 0 ;
  
    printf ("Nhap vao so nguyen n: ");
    scanf("%d", &n );

    for ( i=1 ; i<=n  ; i = i+2  )
    s = s  +  i;

    printf("Tong la: %d", s);

}