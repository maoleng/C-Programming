#include<stdio.h>
#include<math.h>
int main(){
    //Nhập vào r và h tính S và V theo yêu cầu
    int r, h;
    float pi = 3.141593;
    printf("r: ");
    scanf("%d", &r);
    printf("h: ");
    scanf("%d", &h);
    float S;
    S = pi * (r*r + h*h);
    printf("S = %.4f\n", S);

    float V;
    V = (pi * h *(3*r*r + h*h))/6;
    printf("V = %.4f", V);

}