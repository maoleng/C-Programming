#include<stdio.h>
int main()
{
int n;
printf("Nhap vao so nguyen duong n");
    scanf("%d",&n);

    //in ra so cuoi
    int last;
    last = n % 10 ;
    while (n>10){
        n/=10;
    }printf("so dau la %d, so cuoi la %d",n,last);
}