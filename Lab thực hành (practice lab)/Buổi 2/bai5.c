#include<stdio.h>
int main(){
	printf("Nhap vao so do: ");
	int n, i, s;
	scanf("%d", &n);
	int n2 = n;
	while (n >= 10){
		n /= 10;
	}

		s = n2 % 10; 
	
	printf("Chu so cuoi cung la: %d\n", s);
	printf("Chu so dau tien la: %d", n);
}