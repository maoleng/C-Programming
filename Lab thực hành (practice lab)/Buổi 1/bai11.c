#include<stdio.h>
#include<ctype.h>
int main (){
	char a;
	printf("Nhap vao ki tu: ");
	scanf("%c", &a);
	if(isalnum(a)){
		printf("Do la ki tu alphanumberic");
	}else
		printf("Do khong la ki tu alphanumberic");
}