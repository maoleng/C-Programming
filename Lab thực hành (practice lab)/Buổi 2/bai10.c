#include<stdio.h>
#include<math.h>
int main(){
	printf("Nhap vao so do: ");
	int n, sodaonguoc = 0, socuoicung, dem = 0;
	scanf("%d", &n);
	int n2=n;
	while (n2 > 0){
		n2 /= 10;
		dem += 1;
	}	dem -=1;
	
	while (n > 0){
		socuoicung = n % 10;
		n /= 10;
		sodaonguoc = sodaonguoc + socuoicung * pow (10,dem);
		dem -= 1;
	}
	printf("So dao nguoc la: %d",sodaonguoc);
	
	
}