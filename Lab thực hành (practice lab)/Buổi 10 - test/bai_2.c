//nhập vào chu vi hình tròn, tính diện tích hình tròn

#include<stdio.h>
#include<math.h>

int main() {
    float chu_vi, ban_kinh, dien_tich;
    float pi = 3.1415;
    printf("Nhap vao chu vi hinh tron: ");
    scanf("%f", &chu_vi);
    ban_kinh = chu_vi / ( 2 * pi);
    dien_tich = ban_kinh * ban_kinh * pi;
    printf("Dien tich hinh tron la: %f", dien_tich);
}