#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	if (a > 0){
		printf("Gia tri tuyet doi cua a la: %d", a);
	}else
		printf("Gia tri tuyet doi cua a la %d", a*-1);
	
}