// Viết chương trình có các chức năng sau đây: (các câu code chung trong 1 chương trình)
// a. Cho phép người dùng nhập 3 số biểu diễn độ dài 3 cạnh của một tam giác. Nếu độ dài không thỏa
// mãn điều kiện hình thành tam giác thì thông báo lỗi và kết thúc chương trình.
// b. Tính và in ra màn hình chu vi và diện tích của tam giác.
// c. Kiểm tra thuộc tính tam giác có thuộc tính cân, đều, hay thường.

#include<stdio.h>
#include<math.h>
int main(){
    printf("Nhap vao 3 canh tam giac: ");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b - c < 0) || (a + c - b < 0) || (b + c - a < 0)) {
        printf("\nDay khong phai tam giac");
        return 0;
    }

    float S;
    float p = 1.0 * (a + b + c) / 2; 
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\nDien tich tam giac la: %f", S);

    printf("\nChu vi tam giac la: %f", p * 2);
    
    if (a == b && b == c && a == c){
        printf("\nDay la tam giac deu");
    }
    else if (a == b || a == c || b == c){
        printf("\nDay la tam giac can");
    }
    else printf("\nDay la tam giac thuong");
}