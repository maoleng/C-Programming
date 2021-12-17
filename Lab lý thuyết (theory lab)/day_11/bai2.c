#include<stdio.h>
#include<string.h>
struct Member
{
    char id[20], name[50], chucVu[50];
    float heSoLuong;
    int luongCoBan;
};

void input(struct Member st[], int *n)
{
    printf("Nhap tong so nhan vien: ");
    scanf("%d", n);
    int i;
    for(i = 0; i < *n; ++i)
    {
        printf("Nhan vien thu %d\n", i+1);
        //fflush(stdin);
        gets(st[i].name);//lam sach bo dem
        printf("Nhap vao id nhan vien: ");
        gets(st[i].id);
        printf("Nhap vao ten sinh vien: ");
        gets(st[i].name);
        printf("Nhap vao chuc vu: ");
        gets(st[i].chucVu);
        printf("Nhap vao he so luong: ");
        scanf("%f", &st[i].heSoLuong);
        printf("Nhap vao luong co ban: ");
        scanf("%d", &st[i].luongCoBan);
        
    }
}

void output(struct Member st[], int n)
{
    int i;
    printf("\'n");
    for(i = 0; i<n; ++i){
        printf("%s \t %s \t %s \t %f \t %d\n", st[i].id, st[i].name, st[i].chucVu, st[i].heSoLuong, st[i].luongCoBan);
    }
    printf("\n");
}




int main()
{
    struct Member st[10];
    int n;
    input(st, &n);
    output(st, n);
    return 0;
}