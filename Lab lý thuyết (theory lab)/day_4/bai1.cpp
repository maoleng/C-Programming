#include<stdio.h>
int main (){
    int a; printf("Nhap vao so a: "); scanf("%d",&a);
    if (a%2==0) a=a-1;
    for (int i = 1; i<=a; i=i+2){
        printf("%d\t",i);
    }

    
}