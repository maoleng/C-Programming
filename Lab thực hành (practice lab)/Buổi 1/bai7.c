#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao nam : ");
	scanf("%d",&a);
	if ((a%4==0) && (a%100!=0)){
		printf("Do la nam nhuan");
	}else if ((a%100==0) && (a%400==0)){
		printf("Do la nam nhuan");
	}else{
		printf("Do khong la nam nhuan");
	}
}