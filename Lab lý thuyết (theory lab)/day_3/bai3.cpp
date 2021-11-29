#include<stdio.h>
int main()
{
  int n;

  do
  {
    printf("\nNhap vao so nguyen duong n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
      printf("\nSo n phai lon hon 0, vui long nhap lai ");
    }
  } while (n <= 0);

  int CheckTangDan = 1;
  int themang = n;

  int ChuSoCuoi = themang % 10;
  themang /= 10;
 
  printf("\n");
  while(themang != 0)
  {
 
    int ChuSoKeCuoi = themang % 10;
    themang /= 10;
    if (ChuSoCuoi < ChuSoKeCuoi)
    {
      CheckTangDan = 0;
      break;
    }
    else
    {
      ChuSoCuoi = ChuSoKeCuoi;
    }
  }
  if(CheckTangDan)
    printf("\nCac chu so tang dan");
  else
    printf("Cac chu so khong tang dan");
 
}