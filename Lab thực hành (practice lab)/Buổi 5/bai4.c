#include<stdio.h>
#include<string.h>
#include<ctype.h>


char nhapVaoXau(char chuoi[]){
    printf("Nhap vao xau: ");
    gets(chuoi);
}

void xoa(char s[],int vitrixoa){
	int n = strlen(s);
    int i;
    for(i = vitrixoa;i < n; i++)
    s[i] = s[i+1];
	s[n-1] = '\0'; 
}

void xoakt(char s[]){
    int i;
    for(i = 0; i < strlen(s); i++)
		if(s[i]==' '&& s[i+1] == ' '){
			xoa(s,i);
			i--;
		}
    if(s[0] == ' ')
		xoa(s, 0);
    if(s[strlen(s)-1] == ' ')
		xoa(s, strlen(s)-1);
    printf("%s", s);
}

int main(){
    char chuoi[100];
    nhapVaoXau(chuoi);
    xoakt(chuoi);

}