#include<stdio.h>
#include<string.h>

void luu_nhan_vien() {
    FILE *f = fopen("nhan_vien.txt", "w");
    char s[100];
    while (1) {
        gets(s);
        if(strcmp(s,"stop") == 0) {
            break;
        }
        fprintf(f, "%s\n", s);
    }
    fclose(f);
}

void cau_3() {
    FILE *f = fopen("nhan_vien.txt", "r");
    
    char s[100];
    int do_dai_ten_dai_nhat = 0;
    int do_dai_ten;
    while(!feof(f)) {
        fgets(s, 100, f);
        do_dai_ten = strlen(s);
        if ( do_dai_ten > do_dai_ten_dai_nhat ) {
            do_dai_ten_dai_nhat = do_dai_ten;
        }
        if(strcmp(s,"stop") == 0)
            break;      
    }
    printf("Cau 3: %d", do_dai_ten_dai_nhat - 1);

    fclose(f);

    FILE *viet_ket_qua = fopen("DS1.txt", "a");
    fprintf(viet_ket_qua, "Cau 3: %d\n", do_dai_ten_dai_nhat - 1);


}



int main() {
    luu_nhan_vien();
    cau_3();
    return 0;
}