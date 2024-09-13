/*THỰC HÀNH 04.09:
Nhập vào số nguyên dương n từ bàn phím.
Kiểm tra xem n có phải là số chính phương hay không? (số chính phương là số khi lấy căn bặc 2 có kết quả là nguyên).
Ví dụ 1:
Nhap n: 4
Ket qua: n la so chinh phuong
Nhap n: 5
Ket qua: n ko phai so chinh phuong
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; // khởi tạo số cần kt số chính phương
    cout << "Nhap n: ";
    cin >> n;

    if (sqrt(n) * sqrt(n) == n) {
        cout << "Ket qua: " << n << " la so chinh phuong\n";
    } else cout << "Ket qua: " << n << " khong phai la so chinh phuong\n";
    return 0;
}