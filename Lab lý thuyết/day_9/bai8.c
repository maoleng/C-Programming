// Viết chương trình để xây dựng hệ thống đổi tiền như sau: Nhập vào số tiền (phải chia hết
// cho 10000) cần đổi. Nếu nhập dữ liệu sai (số tiền không chia hết cho 10000) thì xuất ra thông báo
// “Nhap du lieu sai” và kết thúc chương trình. Ngược lại, tính và xuất ra số tờ tờ tiền đổi được theo
// mệnh giá ưu tiên từ lớn đến nhỏ 500000, 100000, 50000, 20000 và 10000.
// Ví dụ: Nhập n = 15000 thì thông báo “Nhập dữ liệu sai và kêt thúc chương trình”.
// Nhập n= 1380000  đổi: 2 tờ 500000, 3 tờ 100000, 1 tờ 50000, 1 tờ 20000, 1 tờ 10000.

#include<stdio.h>
int main(){
    printf("Nhap vao so tien: ");
    int n;
    scanf("%d", &n);
    if (n % 10000 != 0){
        printf("\nNhap sai");
        return 0;
    }
    int i;
    int dem500 = 0, dem100 = 0, dem50 = 0, dem20 = 0, dem10 = 0;
    
       while (n >= 500000){
            n -= 500000;
            dem500 += 1;
        }
        while (n >= 100000){
            n -= 100000;
            dem100 += 1;
        }
        while (n >= 50000){
            n -= 50000;
            dem50 += 1;
        }
        while (n >= 20000){
            n -= 20000;
            dem20 += 1;
        }
        while (n >= 10000){
            n -= 10000;
            dem10 += 1;
        }

        printf("So to 500 la: %d\n", dem500);
        printf("So to 100 la: %d\n", dem100);
        printf("So to 50 la: %d\n", dem50);
        printf("So to 20 la: %d\n", dem20);
        printf("So to 10 la: %d\n", dem10);

}