#include<stdio.h>
void inputArray(char fn[]) {
    FILE *f = fopen(fn, "w");
    int n;
    scanf("%d", &n);
    fprintf(f,"%d\n", n);
    int i, a;

    for(i = 0; i<n; ++i) {
        scanf("%d", &a);
        fprintf(f, "%d\n", a);
    }
    
    fclose(f);
}

void readFile(int a[], int *n, char fn[]) {
    FILE *f = fopen(fn, "r");
    fscanf(f, "%d", n);
    int i; 
    
    for(i = 0; i<*n; ++i) {
        fscanf(f, "%d", &a[i]);
    }

}
void output(int a[], int n) {
    int i;
    for(i = 0; i<n; ++i)
    printf("%d\t", a[i]);
    printf("\n");
}

int main() {
    inputArray("array.txt");
    int a[10], n;
    readFile(a, &n, "array.txt");
    output(a, n);
    return 0;   
}