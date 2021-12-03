#include <stdio.h> 
int main(){
	int ngay; printf("Nhap vao so ngay: "); scanf("%d",&ngay);
	int nam, tuan, ngay2;
	nam = ngay / 365;
	tuan = ( ngay - nam * 365 ) / 7;
	ngay2 = ngay - nam * 365 - 7 * tuan ;
	printf("So nam la %d\nSotuan la %d\nSo ngay la %d", nam, tuan, ngay2);	
}