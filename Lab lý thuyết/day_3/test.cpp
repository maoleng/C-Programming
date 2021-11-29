#include<stdio.h>
int main (){
    int a;
    do
    {
        printf("Nhap vao so a: "); scanf("%d",&a);
    } while (a<=0);
    //in ra so m: 1+2+3+4+...+s<a
    int s = 0,m=0;
    do
    {   m++;
        s=s+m;
    } while (s+m+1<a);
    
    printf("So s la: %d",m);
}

