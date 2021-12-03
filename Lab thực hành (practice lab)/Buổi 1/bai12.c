#include<stdio.h>
int main(){
	int a, b, c;
	printf("Nhap vao 3 goc cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a+b+c==180) printf("Do la tam giac");
	else printf("Do khong phai la tam giac");
}