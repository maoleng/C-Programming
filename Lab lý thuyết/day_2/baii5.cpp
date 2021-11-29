#include <stdio.h>
  
int main() {    
    int i, socuoi;
    printf("So ban chon co bao nhieu so: ");
    scanf("%d", &socuoi);
    int arr[socuoi];
    printf("Nhap so cua ban: \n");
    for (i = 0; i < socuoi; i++) {
        printf("chusothu[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("so dau tien la %d", arr[0]);
    printf("\nso cuoi cung la %d", arr[socuoi-1]);
}