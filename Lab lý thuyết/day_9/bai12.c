#include<stdio.h>
int main(){
    printf("Nhap vao diem qua trinh 1: ");
    float diem1; scanf("%f", &diem1);
    if (diem1 < 0 || diem1 > 10){
        printf("Nhap sai");
        return 0;
    }
    printf("Nhap vao diem qua trinh 2: ");
    float diem2; scanf("%f", &diem2);
    if (diem2 < 0 || diem2 > 10){
        printf("Nhap sai");
        return 0;
    }
    printf("Nhap vao diem giua ky: ");
    float diemGiuaKy; scanf("%f", &diemGiuaKy);
    if (diemGiuaKy < 0 || diemGiuaKy > 10){
        printf("Nhap sai");
        return 0;
    }
    printf("Nhap vao diem cuoi ky : ");
    float diemCuoiKy; scanf("%f", &diemCuoiKy);
    if (diemCuoiKy < 0 || diemCuoiKy > 10){
        printf("Nhap sai");
        return 0;
    }

    float diemTrungBinh;
    diemTrungBinh = diem1 * 10 / 100 + diem2 * 20 / 100 + diemGiuaKy * 20 / 100 + diemCuoiKy * 50 / 100;
    printf("%.2f", diemTrungBinh);
    
    if (diemTrungBinh < 5){
        printf("\nHoc lai");
    }
    if (diemTrungBinh >= 5 && diemTrungBinh < 6.5){
        printf("\nTrung binh");
    }
    if (diemTrungBinh >= 6.5 && diemTrungBinh < 8){
        printf("\nKha");
    }
    if (diemTrungBinh >= 8 && diemTrungBinh < 9){
        printf("\nGioi");
    }
    if (diemTrungBinh > 9){
        printf("\nXuat sac");
    }
}