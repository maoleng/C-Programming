// 5. Merge two array to third array.
#include<stdio.h>

void nhapMang(int n, int mang[]){
    int i;
    for (i = 0; i < n; i++ ){
        printf("Nhap vao mang phan tu so %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
}
// 1. Find the first position of even element of the array. 8 10 1 6 5 -> 0. If there is no even element, then return -1
int layPhanTuDauTien(int n, int mang[]){
    int i;
    for (i = 0; i < n; i++){
        if (mang[i] % 2 == 0){
            return i;
        }
    }
    return -1;
}
// 2. Find max of element
void phanTuLonNhat(int n, int mang[]){
    int lonNhat = 0, i; 
    for (i = 0; i < n; i++){
        if (mang[i] > lonNhat){
            lonNhat = mang[i];
        }
    }
    printf("\nSo lon nhat trong mnang la: %d", lonNhat);
}
// 3. Find max even
void soChanLonNhat(int n, int mang[]){
    int lonNhat, i;
    for (i = 0; i < n; i++){
        if (mang[i] > lonNhat && mang[i] % 2 == 0){
            lonNhat = mang[i];
        }
    }
    printf("\nSo chan lon nhat la: %d", lonNhat);
}

// 4. Calculate the average of even elements.
void trungBinhCacSoChan(int n, int mang[]){
    int i, trungBinh = 0, demSoChan = 0;
    for (i = 0; i < n; i++){
        if (mang[i] % 2 == 0){
            trungBinh += mang[i];
            demSoChan++;
        }
    }
    trungBinh = trungBinh / demSoChan;
    printf("\nTrung binh cac so chan la: %d", trungBinh);
}
// 6. Check the array to be a ascending array or not. 8 10 12 14 14 -> 1;
void kiemTraMangTangDan(int n, int mang[]){
    int i, dem = 0;
    for (i = 0; i < n; i++){
        if (mang[i] <= mang[i+1]){
            dem += 1; 
            if (dem == n - 1){
                printf("\nDo la mang tang dan");
                break;
            }
        }
        else {
            printf("\nKhong phai mang tang dan");
            break;
        }
    }
}
// 7. Count total number of duplicate elements. 8 10 1 6 1 10 10 -> 2


int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int mang[100];
    nhapMang(n, mang);
    printf ("\nVi tri phan tu chan dau tien la: %d", layPhanTuDauTien(n, mang));
    phanTuLonNhat(n, mang);
    soChanLonNhat(n, mang);
    trungBinhCacSoChan(n, mang);
    kiemTraMangTangDan(n, mang);
}