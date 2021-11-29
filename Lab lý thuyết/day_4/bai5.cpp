#include<stdio.h>
int main (){
    //timsodoidien vd: 325 -> 523
    //dinhhuong: i=325%10 ;s=0 , s=s*10+i
    int a ; printf("Nhap vao so can in nguoc: "); scanf("%d",&a);
    int i,s;

    while (a>0){
    i= a%10;
    s= s*10  + i;
    a/=10;

    }printf("So in nguoc la: %d",s);
}