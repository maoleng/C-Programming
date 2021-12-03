#include <stdio.h>

int kiemtraso(int a, int b){
	if (a > b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int a, b, c;
	printf("Nhap vao 2 so a va b va c: ");
	scanf("%d %d% d", &a, &b, &c);
	printf("So lon nhat la: %d",kiemtraso(kiemtraso(a,b),c));
}