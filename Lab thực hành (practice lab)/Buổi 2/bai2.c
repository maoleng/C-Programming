#include<stdio.h>
int main(){
	int n,i, s = 0;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		if (i%2 != 0){
			s += i;
		}
	}
	printf("%d", s);
}