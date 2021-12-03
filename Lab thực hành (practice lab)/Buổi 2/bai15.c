#include<stdio.h>
int main(){
    printf("Nhap vao so n: ");
    int n; scanf("%d", &n);
    int so, i;
    for (so = 2 ; so <= n ; so++){
        int count = 0;  //reset bien dem'
        for(i = 2 ; i<so/2; i++){
            if (so%i==0) count+= 1;
        }
        if (count==0) printf("%d\t",so);
    }
}