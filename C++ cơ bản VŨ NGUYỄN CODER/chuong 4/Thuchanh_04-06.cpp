/*
Viết chương trình nhập 2 số thực x, y từ bàn phìm. x, y.
1 - Kiểm tra chúng có khác 0 hay ko và in kết quả ra màn hình.
2 - Nếu x,y khác 0. Kiểm tra tiếp xem chúng có cùng dấu hay khác dấu và in kết quả ra màn hình
Ví dụ:
Nhap x: 0
Nhap y: -2.4
Ket qua:
x bang 0
y khac 0

Nhap x: 6.2
Nhap y: -2.4
Ket qua:
x khac 0
y khac 0
hai so trai dau

Nhap x: 3.3
Nhap y: 5.1
Ket qua:
x khac 0
y khac 0
hai so trai dau
*/
#include <iostream>
    using namespace std;
    int main() {
        float x, y;
        cout << "Nhap x: ";
        cin >> x;
        cout << "Nhap y: ";
        cin >> y;

        cout << "Ket qua: \n";
        if (x == 0 || y == 0) {

            if (x == 0 && y == 0) {
                cout << "x bang 0\ny bang 0\n";
            }
            else if (x == 0 || y != 0) {
                cout << "x bang 0\ny khac 0\n";
            }
            else  cout << "x khac 0\ny khac 0\n";
        }
        else {
            cout << "x khac 0\ny khac 0\n";
        }

        if (x * y > 0) {
            cout << "Hai so cung dau\n";
        }
        else  cout << "Hai so trai dau\n";


        return 0;
    }

