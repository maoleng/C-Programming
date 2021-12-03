//Hàm đổi chữ số đầu và cuối

#include<stdio.h>
#include<math.h>
int _findFirstNum(int n){
    while (n >= 10){
        n /= 10;
    }
    return n;
}

int _findLastNum(int n){
    n = n % 10;
    return n;
}

int _countNum(int n){
    int count = 0;
    while (n > 0){
        n /= 10;
        count += 1;
    }
    return count;
}

int _skipFirstNum(int n){
    int n2 = n;
    int count = 0;
    while (n > 0){
        n /= 10;
        count += 1;
    }
    n2 = n2 % (int)pow(10, count -1);
    return n2;
}

int main(){
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 0);
    int last = _findLastNum(n);
    int first = _findFirstNum(n);
    int count = _countNum(n);
    int skip = _skipFirstNum(n);
    int ketqua = (int)pow(10, count - 1) * last + skip - last + first;
    printf("Ket qua la: %d", ketqua);
}

