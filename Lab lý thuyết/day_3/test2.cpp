#include<stdio.h>
int main (){
    int a; printf("Nhap vao so can in nguoc: "); scanf("%d",&a);

    int s = 0,i=0;
    //vd: 325  s*10+5, s*10+2 ,s*10+3
    
    while (a>0){
    i=a%10;  //32
    s = s*10 +i;
    a/=10;
    }
    printf("so in nguoc la: %d", s);
}