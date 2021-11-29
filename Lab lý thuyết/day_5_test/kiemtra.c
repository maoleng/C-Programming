#include <stdio.h>
#include <math.h>
int songuyen(int n){
 while(n<=0)
{
    printf ("moi nhap lai:");
    scanf("%d", &n);
}
}
void uocchung(int n){
    int i =1;
    for (; i < n; i++){
        if (n%i==0){
            printf("%d\t",i);
        }
    }
}

void sohoanhao(int n){
    int s=0;
    for (int i = 1; i < n; i++){
        if (n%i==0){
            s+=i;
        }
    }
    if (s == n){
        printf("\n%d la so hoan hao",n);
    }else{
        printf("\n%d hong la so hoan hao",n);
    }
}

void sohoanhao2(int n){
    int i, j, sum;
    printf("\nCac so hoan hao be hon %d la: ",n);
    for(i = 2; i <= n; i++){
        sum = 1;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
                sum += j;
        }
        if(sum == i)
            printf("%d\t", i);
}
}

void tongcacsochan(int n) {
    int r, sum = 0;
    while (n > 0) {
        r = n % 10;    
        n = n / 10;  
        if (r % 2 == 0){
            sum = sum + r;
        }
    }
    printf("\nTong cac so chan trong so la: %d", sum );
}

void solonnhattrongso(int n){
    int remider, Largest= 0;
    while (n > 0){
    
    remider = n % 10;
    if (Largest < remider){
        Largest = remider;
    }
    n = n / 10;
    }
    printf ("\nSo lon nhat trong so la :%d \n", Largest);
}

void trungbinhcacso(int n) {
    int n2 = n,dem = 0;
    while(n2>0){
        n2 /= 10;
        dem += 1;
    }
    int r, sum = 0;
    while (n > 0) {
        r = n % 10;    
        n = n / 10;  
        sum = sum + r;
    }
    float tb = (float)sum/dem;
    printf("\nTrung binh cac so trong so la: %f", tb );
}

void daonguocso(int n){
    int n2 = n, songuoc, so;
    while (n > 0){
        so = n % 10;
        songuoc = songuoc*10 + so;
        n /= 10;
    }
    if (songuoc > n2){
        printf("\nTrue");
    }else printf("\nFalse");
}

int sogiua(int n)
{
    int giua = (int)log10(n) + 1;
    n = (int)(n / pow(10, giua / 2)) % 10;
    return n;
}

int main(){
    int a;
    printf("nhap so nguyen:");
    scanf("%d", &a);

    songuyen(a);
    uocchung(a);
    sohoanhao(a);
    sohoanhao2(a);
    tongcacsochan(a);
    solonnhattrongso(a);
    trungbinhcacso(a);
    daonguocso(a);
    printf("\nSo o giua la: %d",sogiua(a));
}