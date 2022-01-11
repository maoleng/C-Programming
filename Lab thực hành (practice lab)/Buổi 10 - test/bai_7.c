#include<stdio.h>
int giai_thua(int n) {
        while ( n > 1) {
            return n* giai_thua(n-1);
            n -= 1;
        }

    }
    
int main() {
    printf("%d", giai_thua(4));
    
}