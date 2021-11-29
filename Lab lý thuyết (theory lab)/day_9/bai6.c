#include<stdio.h>
#include<math.h>
int main() {
    printf("Nhap vao x: ");
    int x;
    scanf("%d", &x);

    float fx;
    if (x < 0){
        fx = sin(x) * cos(5*x);
        printf("\n%f", fx);
    }
    if (x = 0){
        fx = pow(5, x);
        printf("\n%f", fx);
    }
    if (x > 0 && x < 5){
        fx = pow(2.718281828, x);
        printf("\n%f", fx);
    }
    if (x >= 5){
        fx = pow(5, x)/ (x + 5);
        printf("\n%f", fx);
    }
}