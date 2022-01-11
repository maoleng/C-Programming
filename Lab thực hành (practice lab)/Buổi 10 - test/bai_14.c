#include<stdio.h>

void countDuplicate(int a[],int n, int k) {
    int i;
    int demx=0;
    for(i=0;i<n;i++) {
        if(k == a[i]) {
            demx++;
        }
    }
    printf("So K xuat hien %d lan trong mang.",demx);
}

int main() {
    int n, i, k;
    
    int mang[500];
    printf("Nhap vao so phan tu mang: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%d]: ",i);
        scanf("%d",&mang[i]);
    }

    printf("Nhap vao phan tu muon tim kiem: ");
    scanf("%d", &k);

    countDuplicate(mang, n, k );
}

