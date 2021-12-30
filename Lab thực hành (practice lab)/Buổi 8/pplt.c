#include<stdio.h>
#include<string.h>

struct NV {
    int id;
    char name[50];
    char sex[50];
    char birthyear[20];
    char phonenumber[15];
    int salary;
};


void input(struct NV st[], int *n)
{
    printf("Nhap tong so nhan vien: ");
    scanf("%d", n);
    int i;
    for(i = 0; i < *n; ++i)
    {
        printf("Nhan vien thu %d\n", i+1);

        printf("Nhap vao id nhan vien: ");
        fgets(st[i].id);
        printf("Nhap vao ten nhan vien: ");
        fgets(st[i].name);
        printf("Nhap vao gioi tinh: ");
        scanf("%c", &st[i].sex);
        printf("Nhap vao ngay sinh: ");
        fgets(st[i].birthyear);
        printf("Nhap vao so dien thoai: ");
        fgets(st[i].phonenumber);
        printf("Nhap vao luong co ban: ");
        scanf("%d", &st[i].salary);
        
    }
}

void output(struct Member st[], int n)
{
    int i;
    printf("\'n");
    for(i = 0; i<n; ++i){
        printf("%s \t %s \t %c \t %s \t %s \t %d\n", st[i].id, st[i].name, st[i].sex, st[i].birthyear, st[i].phonenumber, st[i].salary);
    }
    printf("\n");
}




int main()
{
    struct NV st[10];
    int n;
    input(st, &n);
    output(st, n);
    return 0;
}

