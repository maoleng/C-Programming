#include<stdio.h>
#include<string.h>
struct Student
{
    char id[20], name[50];
    float toan, li, hoa, diemTotNghiep;
    int khuVuc;
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
        gets(st[i].name);//lam sach bo dem
        printf("Nhap vao id sinh vien: ");
        gets(st[i].id);
        printf("Nhap vao ten sinh vien: ");
        gets(st[i].name);
        printf("Nhap vao khu vuc sinh vien: ");
        scanf("%d", &st[i].khuVuc);
        printf("Nhap vao diem tot nghiep sinh vien: ");
        scanf("%f", &st[i].diemTotNghiep);
        printf("Nhap vao diem toan li hoa sinh vien: ");
        scanf("%f%f%f", &st[i].toan, &st[i].li, &st[i].hoa);
        
    }
}

void output(struct Student st[], int n)
{
    int i;
    for(i = 0; i<n; ++i)
        printf("%s\t%s\t%d\t%.1f\t%.1f\t%.1f\t%.1f\n", st[i].id, st[i].name, st[i].khuVuc, st[i].diemTotNghiep, st[i].toan, st[i].li, st[i].hoa);
    printf("\n");
}

//in ra những sinh viên đậu
void listAVG(struct Student st[], int n)
{
    printf("SV co tong diem >= 15:\n");
    int i;
    float diemCongKhuVuc, diemCongTotNghiep;
    for(i = 0; i<n; ++i){
        if (st[i].khuVuc == 3){
            diemCongKhuVuc = 3;
        }else if (st[i].khuVuc == 2){
            diemCongKhuVuc = 1;
        }else{
            diemCongKhuVuc = 0;
        }

        if (st[i].diemTotNghiep > 8){
            diemCongTotNghiep = 2;
        }else if (st[i].diemTotNghiep >= 7 && st[i].diemTotNghiep <= 8){
            diemCongTotNghiep = 1;
        }else{
            diemCongTotNghiep = 0;
        }

        if( (st[i].toan + st[i].li + st[i].hoa + diemCongTotNghiep + diemCongKhuVuc) >= 15)
            printf("%s \t %s \t %d \t%.1f\t%.1f\t%.1f\t%.1f\n", st[i].id, st[i].name, st[i].khuVuc, st[i].diemTotNghiep, st[i].toan, st[i].li, st[i].hoa);
        printf("\n");
    }
    
}








int main()
{
    struct Student st[10];
    int n;
    input(st, &n);
    output(st, n);
    listAVG(st, n);
    return 0;
}