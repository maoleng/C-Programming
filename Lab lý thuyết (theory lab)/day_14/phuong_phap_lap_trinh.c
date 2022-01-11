#include<stdio.h>


void cau_1 (char file_path[]) {
    FILE *f = fopen(file_path, "w");
    int gia_tri;
    
    do {
        scanf("%d", &gia_tri);
        if(gia_tri != 0)
        fprintf(f, "%d\n", gia_tri);
    } while (gia_tri != 0);

    fclose(f);
}

void doc_file(int mang[], int *n, char file_path[]) {
    FILE *f = fopen(file_path, "r");
    int i = 0;
    
    while (!feof(f)) {
        fscanf(f, "%d", &mang[i++]);
    }

    *n = i-1;
    fclose(f);
}



int tim_gia_tri_max(int mang[], int n) {
    int m = mang[0];
    int i;
    for(i =1; i<n; ++i)
    if (m < mang[i])
    m = mang[i];
    return m;
}

void vi_tri_max(int mang[], int n) {
    int m = tim_gia_tri_max(mang,n);
    int i;
    for(i = 0; i<n; ++i)
        if(m == mang[i]) {
            printf("%d\t", i);
    }
    printf("\n");
}



void cau_2_va_3( int mang[], int n) {
    int i, m;
    for(i = 0; i<n; ++i) {
        printf("%d\t", mang[i]);
    }
    printf("Max = %d\n", tim_gia_tri_max(mang, n));
    printf("Vi tri cua max: ");
    vi_tri_max(mang, n);
    int x = 20;


    
}
int main() {
    cau_1("Array.txt");
    int mang[10], n;

    doc_file(mang, &n, "Array.txt");
    
    cau_2_va_3( mang, n );
    
    return 0;
}