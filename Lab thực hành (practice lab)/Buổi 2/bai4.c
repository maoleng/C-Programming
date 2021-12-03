#include<stdio.h>
int main(){
	printf("Nhap vao so n: ");
	int n, i, s = 0;
	scanf("%d",&n);
	
	for (i = 1; i <= n; i++){
		s += i;
	}
	
	printf("Tong tu 1 toi %d la %d", n, s);
}