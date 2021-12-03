void xoaPhanTuMang(int n, int mang[]) {
    int viTri;
    printf("Nhap vao vi tri: "); scanf("%d", &viTri);
    int i;
    for (i = viTri; i < n; i++){
        mang[i] = mang[i+1];
    }
    for (i = 0; i < n - 1; i++){
        printf("%d ", mang[i]);
    }
}