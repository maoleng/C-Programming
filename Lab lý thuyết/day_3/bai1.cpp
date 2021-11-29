#include<stdio.h>
int main (){
    int a; printf("Nhap vao so can kiem tra: "); scanf("%d",&a);
    int s=0;
    for (int i = 1 ; i <a ; i++){
        if (a%i==0){
            s=s+i;
        }
    }
    if (s==0) printf("Do khong phai la so hoan hao");
    else if(s==a) printf("Do la so hoan hao");
    else printf ("Khong phai so hoan hao");
}