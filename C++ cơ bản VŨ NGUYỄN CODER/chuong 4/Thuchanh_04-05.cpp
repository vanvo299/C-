/* THỰC HÀNH 04.05:
Nhập lần lượt ba hệ số a, b, c của 1 phương trình bậc 2. Với a khác 0.
In ra 1 trong 3 trường hợp của nghiệm của phương trình
1 - Vô nghiệm
2 - Co mot nghiem
3 - Co 2 nghiem
Chương trình cần chạy được như hình minh hoạ
*/
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Nhap vao cac he so cua phuong trinh bac hai: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if (a == 0) {
        printf ("Phuong trinh khong ton tai!!!");
        return 1;
    }
    float delta;
    delta = pow(b,2) - (4 * a * c);
    float x1, x2;
    if (delta > 0) {
         printf("Phuong trinh co hai nghiem phan biet la \n");
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("x = %.1f\n", x1);
        printf("x= %.1f\n", x2);
    }
    if (delta == 0) {
        printf("Phuong trinh co nghiem kep \n");
         x1 = x2 = (-b)/(2*a);
        printf("x = %.1f\n", x1);
    }
    if (delta < 0) {
        printf("Phuong trinh vo nghiem!!");
    }
    return 0;
}