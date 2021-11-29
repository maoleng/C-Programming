#include<stdio.h>
int main(){
    printf("Nhap vao tien va lua chon: ");
    int tien, luaChon, i, dem;
    scanf("%d%d", &tien, &luaChon);

    if (luaChon == 1) {
        if (tien < 9000) {
            printf("\nThieu tien");
            return 0;
        }
        dem = 0;
        while (tien >= 9000) {
            tien -= 9000;
            dem += 1;
        }
        printf("Tra xanh C2 %d chai, tien du la %d", dem, tien);
    }

    if (luaChon == 2) {
        if (tien < 11000) {
            printf("\nThieu tien");
            return 0;
        }
        dem = 0;
        while (tien >= 11000) {
            tien -= 11000;
            dem += 1;
        }
        printf("Sting %d chai, tien du la %d", dem, tien);
    }

    if (luaChon == 3) {
        if (tien < 10000) {
            printf("\nThieu tien");
            return 0;
        }
        dem = 0;
        while (tien >= 10000) {
            tien -= 10000;
            dem += 1;
        }
        printf("Pepsi %d chai, tien du la %d", dem, tien);
    }

    if (luaChon == 4) {
        if (tien < 13000) {
            printf("\nThieu tien");
            return 0;
        }
        dem = 0;
        while (tien >= 13000) {
            tien -= 13000;
            dem += 1;
        }
        printf("Warrior %d chai, tien du la %d", dem, tien);
    }

    if (luaChon == 5) {
        if (tien < 5000) {
            printf("\nThieu tien");
            return 0;
        }
        dem = 0;
        while (tien >= 5000) {
            tien -= 5000;
            dem += 1;
        }
        printf("Nuoc suoi %d chai, tien du la %d", dem, tien);
    }
}