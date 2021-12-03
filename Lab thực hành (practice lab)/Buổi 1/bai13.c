#include<stdio.h>
int main(){
	int a, b, c, d, e, avg;
	printf("Nhap vao diem 5 mon: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	avg = (float)(a+b+c+d+e)/5;
	if (avg < 4 ) printf("Grade F");
	if (avg >= 4 && avg<6) printf("Grade E");
	if (avg >= 6 && avg<7) printf("Grade D");
	if (avg >= 7 && avg<8) printf("Grade C");
	if (avg >= 8 && avg<9) printf("Grade B");
	if (avg > 9) printf("Grade A");
}