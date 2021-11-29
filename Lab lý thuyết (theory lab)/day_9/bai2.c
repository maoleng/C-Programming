// Chương trình tính phí dịch vụ taxi theo chiều dài đường đi d như sau:

// – d ≤ 1 km : giá 18 000 VND/km,
// – 1 < d ≤ 10 km : giá 8 000 VND/km,
// – 10 < d ≤ 30 km : giá 6 000 VND/km,
// – d > 30 km : giá là 4 000 VND/km.

// Ví dụ: nếu khách hàng đi 35 km thì tiền = 1 ∗ 18000 + 9 ∗ 8000 + 20 ∗ 6000 + 5 ∗ 4000

#include<stdio.h>
int main(){
    int quangDuong;
    printf("Nhap quang duong: ", quangDuong);
    scanf("%d", &quangDuong);
    if (quangDuong <= 1) {
        printf("Gia tien la: %d", 18000 * quangDuong);
    }
    if (quangDuong > 1 && quangDuong <= 10) {
        printf("Gia tien la: %d", 18000 * 1 + 8000 * (quangDuong - 1) );
    }
    if (quangDuong > 10 && quangDuong <= 30) {
        printf("Gia tien la: %d", 18000 * 1 + 8000 * 9 + 6000 * (quangDuong - 10));
    }
    if (quangDuong > 30) {
        printf("Gia tien la: %d", 18000 * 1 + 8000 * 9 + 6000 * 20 + 4000* (quangDuong - 30));
    }
}