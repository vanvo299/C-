/*
Cho các miền giá trị như hình.
Nhập 1 giá trị số thực x. Kiểm tra xem x có thuộc các miền này ko. Nếu có in ra 1, nếu ko thì in ra 0.
Chương trình cần chạy như hình minh hoạ
*/
#include <iostream>
using namespace std;
int main() {
    float x;
    cout << "Nhap so thuc x: ";
    cin >> x;

    bool a = x >= 0;
    bool b = (x >= -1 && x <= 2) || (x >= 4 && x <= 6);
    bool c = (x == 5) || (x > -2 && x < 2);
    bool d = (x > -4 && x <= 0) || (x > 4);

    cout << "Ket qua 1: " << a << endl;
    cout << "Ket qua 2: " << b << endl;
    cout << "Ket qua 3: " << c << endl;
    cout << "Ket qua 4: " << d << endl;
    return 0;
}