#include<stdio.h>
int main (){
	int chieudai, chieurong;
	printf("Nhap vao chieu dai va chieu rong: ");
	scanf("%d%d",&chieudai,&chieurong);
	int dientich = chieudai * chieurong; 
	int chuvi = (chieudai + chieurong) * 2;
	printf("Dien tich la: %d\nChu vi la: %d", dientich,chuvi);	
}