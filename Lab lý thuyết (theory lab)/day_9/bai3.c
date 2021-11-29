// Viết chương trình nhập vào tọa độ tâm O(x0, y0) (số thực) và bán kính R (số thực) của một
// đường tròn, tọa độ điểm A(xA, yA) (số thực). Chương trình kiểm tra điểm A(xA, yA) nằm trên, trong
// hay ngoài đường tròn. Gợi ý tính khoảng cách giữa điểm cần so sánh với tâm đường tròn. Sau đó
// so sánh khoảng cách này với bán kính đường tròn. Công thức tính khoảng cách giữa hai điểm A
// và O như sau:

// d(A,O) = √(xA − x0) 2 + (yA − y0) 2

#include<stdio.h>
#include<math.h>
int main(){
    int x0, y0; printf("\nNhap vao toa do tam O: "); scanf("%d%d", &x0, &y0);
    int r; printf("\nNhap vao ban kinh: "); scanf("%d", &r);
    int xA, yA; printf("\nNhap vao toa do diem A: "); scanf("%d%d", &xA, &yA);

    int khoangCach;
    khoangCach = sqrt((xA - x0) * (xA - x0) + (yA - y0) * (yA - y0));
    if (khoangCach > r) {
        printf("\nDiem A nam ngoai duong tron");
    }
    else if (khoangCach == r) {
        printf("\nDiem A nam tren duong tron");
    }
    else {
        printf("\nDiem A nam trong duong tron");
    }
    
}