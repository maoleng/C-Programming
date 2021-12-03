#include<stdio.h>
#include<math.h>
long long int DecToBin(int n){
    int du, i = 0;
    long long int bin = 0;
    while (n>0){
        du = n % 2;
        du *= pow(10, i);
        i+= 1;
        bin += du;
        n/=2;
    }
    return bin;
}


int main(){
    int n;
    printf("Nhap vao he so 10 n: ");
    scanf("%d",&n);
    
    printf("%lli", DecToBin(n));
}