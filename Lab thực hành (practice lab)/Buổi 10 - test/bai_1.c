//Trong hệ tọa độ oxy cho 2 điểm A và B có tọa độ số thực.
//Tính khoảng cách giữa 2 điểm A và B biết d = căn ( (xA- xB)^2 + (yA - yB)^2 )

#include <stdio.h>
#include <math.h>

int main() {
    float xA, xB, yA, yB, d;
    
    printf("Nhap vao toa do diem A\n");
    scanf("%f%f", &xA, &yA);
    printf("Nhap vao toa do diem A\n");
    scanf("%f%f", &xB, &yB);

    d = sqrt( (xA-xB)*(xA-xB) + (yA-yB)*(yA-yB) );
    printf("Khoang cach 2 diem A va B la: \n %f", d);

}


