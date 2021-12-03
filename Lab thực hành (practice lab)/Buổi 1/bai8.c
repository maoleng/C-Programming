#include <stdio.h>

int kiemtraso(int a, int b){
	if (a > b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int a, b;
	printf("Nhap vao 2 so a va b: ");
	scanf("%d %d", &a, &b);
	printf("So lon nhat la: %d",kiemtraso(a,b));
}