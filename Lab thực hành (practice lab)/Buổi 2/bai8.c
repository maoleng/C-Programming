#include<stdio.h>
int main(){
	int n, dem = 0;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (n > 0){
		n /= 10;
		dem += 1;
	}
	printf("So chu so la: %d", dem);
}