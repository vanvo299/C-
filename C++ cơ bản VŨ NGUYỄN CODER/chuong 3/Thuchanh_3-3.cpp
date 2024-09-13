/* THỰC HÀNH 3.3:
Viết chương trình nhập 3 cạnh tam giác, in ra diện tích tam giác đó. 
Cho trước công thức tính diện tích tam giác như hình 1
Chương trình cần chạy được như hình 2
*/
#include <iostream>
#include <cmath>
int main() {
     int a, b, c; // 3 cạnh của tam giác tương ứng với a b c
     std::cout << "Nhap canh a: ";
     std::cin >> a;
     std::cout << "Nhap canh b: ";
     std::cin >> b;
     std::cout << "Nhap canh c: ";
     std::cin >> c;

     float p = (a + b + c) / 2.0; // nửa chu vi hình tam giác
     float S = sqrt(p*(p - a)*(p - b)*(p - c)); // diện tích hình chữ nhật

     std::cout << "Dien tich tam giac la: " << S << std::endl;

    return 0;
}