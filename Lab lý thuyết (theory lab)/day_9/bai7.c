#include<stdio.h>
#include<math.h>
int main(){
    printf("Nhap vao x: ");
    int x;
    float y1, y2, y3, y4, y5;
    scanf("%d", &x);
    y1 = 2*x*x*x + 5*x*x + 7*x + 15;
    printf("\n%f", y1);

    y2 = sin(x)*sin(x) + cos(2*x)*cos(2*x) + tan(3*x)*tan(3*x);
    printf("\n%f", y2);

    y3 = pow((x + 10), (x + 5));
    printf("\n%f", y3);

    y4 = 3 * pow(2.718281828, cos(x + 1));
    printf("\n%f", y4);

    y5 = log10(x + 10);
    printf("\n%f", y5);
}