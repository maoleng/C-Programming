#include<stdio.h>
#include<string.h>
void luuBaitho(char fn[])
{
    FILE *f = fopen(fn, "w");
    char hoTen[100];
    int id;
    int soNgayCong;
    int luongMotNgay;
    char chucVu[20];

    while (1)
    {
        
        printf("Nhap vao ma so nhan vien: ");
        scanf("%d", &id);

        printf("Nhap vao ho ten nhan vien: ");
        gets(hoTen);

        
        printf("Nhap vao so ngay cong cua nhan vien: ");
        scanf("%d", &soNgayCong);

        
        printf("Nhap vao luong 1 ngay cong cua nhan vien: ");
        scanf("%d", &luongMotNgay);

        printf("Nhap vao chuc vu nhan vien: ");
        gets(chucVu);

        if(strcmp(chucVu,"stop") == 0)
            break;
        
        fprintf(f, "%d\n", id);
        fprintf(f, "%s\n", hoTen);
        fprintf(f, "%d\n", soNgayCong);
        fprintf(f, "%d\n", luongMotNgay);
        fprintf(f, "%s\n", chucVu);
    }
    fclose(f);
}
void inBaitho(char fn[])
{
    FILE *f = fopen(fn, "r");
    char s[100];
    while(!feof(f))//
    {
        fgets(s, 100, f);
        printf("%s", s);
    }
    fclose(f);
}
int main()
{
    // luuBaitho("baitho.txt");
    inBaitho("baitho.txt");
    return 0;
}