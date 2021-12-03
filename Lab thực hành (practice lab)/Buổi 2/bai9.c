#include<stdio.h>
#include<math.h>
int main(){
	printf("Nhap vao so do: ");
	int n, i, socuoicung, so = 0, dem = 0;
	scanf("%d", &n);
	int n2 = n, n3 = n;
	socuoicung = n2 % 10; 
	while (n >= 10){
		n /= 10;
	}
	printf("%d %d", socuoicung, n);
	while (n3 > 0){
		n3 /= 10;
		dem += 1;
	}
	so = socuoicung * pow(10,(dem-1)) + n2 % pow(10,(dem-1)) - socuoicung + n;
	printf("So do la: %d", so);
}