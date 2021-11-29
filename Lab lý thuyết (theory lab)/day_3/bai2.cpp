#include<stdio.h>
int main()
{
int n;
printf("Nhap vao so nguyen duong n");
    scanf("%d",&n);

// if (n<10) printf("Sai"); return 0;
int check = 1;

while(n /= 10)
{
if((n % 10) % 2 == 1)
{
check = 0;
break;
}
}

if(check == 1)
{
printf("Dung !");
}

else
{
printf("Sai");
}
}

 
