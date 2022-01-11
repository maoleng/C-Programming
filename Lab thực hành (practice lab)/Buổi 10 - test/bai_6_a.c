#include<stdio.h>
#include<string.h>
struct Student
{
    char ma_so[20], ho_ten[50];
    float diem_phuong_phap_lap_trinh;
    float diem_toan_tin_hoc;
    float diem_trung_binh_tich_luy;
    char xep_loai[50];
};

void input(struct Student st[], int *n)
{
    printf("Nhap tong so sv: ");
    scanf("%d", n);
    int i;
    for(i = 0; i < *n; ++i)
    {
        printf("SV thu %d\n", i+1);
        //fflush(stdin);
        gets(st[i].ho_ten);//lam sach bo dem
        printf("Nhap vao ma so sinh vien: ");
        gets(st[i].ma_so);
        printf("Nhap vao ten sinh vien: ");
        gets(st[i].ho_ten);
        printf("Nhap vao diem cac mon cua sinh vien: ");
        scanf("%f%f", &st[i].diem_phuong_phap_lap_trinh, &st[i].diem_toan_tin_hoc);
    }
}

void output(struct Student st[], int n, char ma_so_can_tim[50])
{
    int i;
    for(i = 0; i<n; ++i) {
        if ( strcmp(  st[i].ma_so, ma_so_can_tim ) == 0 ) {
            printf("Sinh vien can tim la: %s, %s, %f, %f", st[i].ma_so, st[i].ho_ten, st[i].diem_phuong_phap_lap_trinh, st[i].diem_toan_tin_hoc);
        }
    }
}



int main()
{
    struct Student st[10];
    int n;
    char ma_so_can_tim[50];
    gets(ma_so_can_tim);
    input(st, &n);
    output(st, n, ma_so_can_tim);
}