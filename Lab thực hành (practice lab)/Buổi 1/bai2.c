#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a va b: ");
	scanf("%d%d",&a,&b);
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float thuong = (float)a/b;
	int chiadu = a % b;
	
	printf("Tong la %d\n", tong);
	printf("Hieu la %d\n", hieu);
	printf("Tich la %d\n", tich);
	printf("Thuong la %f\n", thuong);
	printf("So chia du la %d\n", chiadu);

}