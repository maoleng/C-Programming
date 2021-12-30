#include <stdio.h>

void main() {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, num17, num18, num19, num20;
    int sum = 0;

    //doc file
    FILE *readf;
    readf = fopen("thongtin.loc", "r");

    fscanf(readf, "%d", &num1);
    fscanf(readf, "%d", &num2);
    fscanf(readf, "%d", &num3);
    fscanf(readf, "%d", &num4);
    fscanf(readf, "%d", &num5);
    fscanf(readf, "%d", &num6);
    fscanf(readf, "%d", &num7);
    fscanf(readf, "%d", &num8);
    fscanf(readf, "%d", &num9);
    fscanf(readf, "%d", &num10);
    fscanf(readf, "%d", &num11);
    fscanf(readf, "%d", &num12);
    fscanf(readf, "%d", &num13);
    fscanf(readf, "%d", &num14);
    fscanf(readf, "%d", &num15);
    fscanf(readf, "%d", &num16);
    fscanf(readf, "%d", &num17);
    fscanf(readf, "%d", &num18);
    fscanf(readf, "%d", &num19);
    fscanf(readf, "%d", &num20);

    
    sum = num1+ num2+ num3+ num4+ num5+ num6+ num7+ num8+ num9+ num10+ num11+ num12+ num13+ num14+ num15+ num16+ num17+ num18+ num19+ num20;

    fclose(readf);


    printf ("%d", sum);

}