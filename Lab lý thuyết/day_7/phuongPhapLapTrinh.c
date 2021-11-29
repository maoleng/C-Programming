#include<stdio.h>

void nhapMang(int n, int mang[]){
    int i;
    for (i = 0; i < n; i++ ){
        printf("Nhap vao mang phan tu so %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}

void xuatMang(int n, int mang[]){
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", mang[i]);
    }
}

void soNguyenTo(int n, int mang[]){
    int i;
    for (i = 0; i < n; i++){
        int j, kiemTra = 0;
        for (j = 2; j < mang[i]; j++){
            if (mang[i] % j == 0){
                kiemTra = 0;
                break;
            }else kiemTra = 1;
        }
        if (kiemTra == 1){
            printf("\nSo nguyen to trong mang: %d", mang[i]);
        }
    }
}

void cucDaiSoAm(int n, int mang[]){
    int i, lonNhat = 0;
    for (i = 0; i < n; i++){
        if (mang[i]*-1 > mang[i+1]*-1 && mang[i] < 0){
            lonNhat = mang[i];
        }
    }
    printf("\nCuc dai so am la: %d", lonNhat);
}

void trungBinhSoAm(int n, int mang[]){
    int i, trungBinhAm = 0, dem = 0;
    for (i = 0; i < n; i++){
        if (mang[i] < 0){
            trungBinhAm += mang[i];
            dem += 1;
        }
    }
    printf("\nTrung binh cac so am la: %f", (float)trungBinhAm / dem);
}

void themPhanTuVaoCuoiMang(int n, int mang[]){
    printf("\nNhap vao phan tu moi cua mang: ");
    scanf("%d", &mang[n]);
    int i;
    for (i = 0; i < n + 1; i++){
        printf("%d ", mang[i]);
    }
}

void themPhanTuVaoGiuaMang(int n, int mang[]){
    printf("\nNhap vao phan tu moi cua mang: ");
    int giua = n / 2;
    scanf("%d", &mang[giua]);
    int i;
    for (i = 0; i < n + 1; i++){
        printf("%d ", mang[i]);
    }
}

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int mang[100];
    nhapMang(n, mang);
    xuatMang(n, mang);
    soNguyenTo(n, mang);
    cucDaiSoAm(n, mang);
    trungBinhSoAm(n, mang);
    themPhanTuVaoCuoiMang(n, mang);
    themPhanTuVaoGiuaMang(n, mang);
}