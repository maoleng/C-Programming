#include<stdio.h>
int main() {
    int x, y;
    float s;
    printf("Nhap vao x va y: ");
    scanf("%d %d", &x, &y);
    s = ((3*x*x*x - 1/2 *x*x + 1/5*x*y)*(6*x*y*y*y)) * 1.0;
    printf("S= %f", s);
}