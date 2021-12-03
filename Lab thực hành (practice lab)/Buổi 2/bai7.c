#include<stdio.h>
int main(){
	int s = 1, n, socuoicung;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (n > 0){
		socuoicung = n % 10;
		n /= 10;
		s *= socuoicung;
	}
	printf("Tich cac chu so la: %d", s);
}