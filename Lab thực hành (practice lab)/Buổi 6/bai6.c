// tong cua 2i + 1; i = 1 > n 
#include<stdio.h>
#include<math.h>

int main(){
    float n; printf("Nhap vao so n: "); scanf("%f",&n);

    int deQuyCauA(int n){
        if (n == 1){
            return 3;
        }else return 2 * n + 1 + deQuyCauA(n - 1);
    }

    float deQuyCauB(float n){
        if (n == 1){
            return 0.5;
        }else return (n/1.0) / 2 + deQuyCauB(n - 1);
    }

    int deQuyCauC(int n) {
        
        if (n == 1){
            return 1;
        }else {
            int i, giaiThuaPhanTu = 1;
            for (i = 1; i <= n; i++){
                giaiThuaPhanTu = giaiThuaPhanTu * i;
            }
            return giaiThuaPhanTu + deQuyCauC(n-1);
        }

    }

    float deQuyCauD(float n) {

        if (n == 1){
            return 1;
        }else return sqrt(n) + deQuyCauD(n - 1);
    }

    int deQuyCauE(int n) {
        
        if (n == 1){
            return 1;
        }else {
            int i, giaiThuaPhanTu = 1;
            for (i = 1; i <= n; i++){
                giaiThuaPhanTu = giaiThuaPhanTu * i;
            }
            return giaiThuaPhanTu * deQuyCauC(n-1);
        }

    }


    printf("cau a: %d", deQuyCauA(n));
    printf("\ncau b: %f", deQuyCauB(n));
    printf("\ncau c: %d", deQuyCauC(n));
    printf("\ncau d: %f", deQuyCauD(n));
    printf("\ncau e: %d", deQuyCauE(n));
}

