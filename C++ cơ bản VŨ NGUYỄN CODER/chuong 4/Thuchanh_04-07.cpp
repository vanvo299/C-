/* THỰC HÀNH 04.07: 
Nhập từ bàn phím 3 số thực x, y, z
1 - Tìm số lớn nhất trong 3 số x, y, z
2 - Tìm số bé nhất trong 3 số x, y, z
3 - Kiểm tra xem cả 3 số có cùng dấu hay ko?
4 - In ra các cặp số trái dấu nhau.
Ví dụ:
Nhap x: 4.5
Nhap y: 2.2
Nhap z: 6.6
Ket qua 1: So lon nhat la 6.6
Ket qua 2: So be nhat la 2.2
Ket qua 3: Ca 3 so cung dau
Ket qua 4: Ko co cap so nao trai dau
Nhap x: 3
Nhap y: 5.1
Nhap z: -2
Ket qua 1: So lon nhat la 5.1
Ket qua 2: So be nhat la -2
Ket qua 3: Ca 3 so khac dau nhau
Ket qua 4: (3,-2), (5.1,-2)
*/
#include <iostream>
using namespace std;
int main() {
    float x, y, z;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;
    
    //Kết quả 1: Kiểm tra số lớn nhất
    if (x > y && x > z) {
        cout << "Ket qua 1: So lon nhat la: " << x << endl;
    } 
    else if (x < y && y > z) {
        cout << "Ket qua 1: So lon nhat la: " << y << endl;
    } else cout << "Ket qua 1: So lon nhat la: " << z << endl;

    // Kết quả 2: Kiểm tra số bé nhất
    if (x < y && x < z) {
        cout << "Ket qua 2: So be nhat la: " << x << endl;
    } 
    else if (x > y && y < z) {
        cout << "Ket qua 2: So be nhat la: " << y << endl;
    } else cout << "Ket qua 2: So be nhat la: " << z << endl;

    // 3 - Kiểm tra xem cả 3 số có cùng dấu hay ko?
    // 4 - In ra các cặp số trái dấu nhau.
    if (x * y > 0 && x * z > 0) {
        cout << "Ket qua 3: Ca ba so cung dau\n";
        cout << "Ket qua 4: Khong co cap nao trai dau\n";
    } else { cout << "Ket qua 3: Ca 3 so khac dau nhau\n";
          if (x * y > 0) {
            cout << "Ket qua 4: (" << x << ", " << z << "), " << "(" << y << ", " << z << ")" << endl;
          } else if (x * z > 0) {
             cout << "Ket qua 4: (" << x << ", " << y << "), " << "(" << y << ", " << z << ")" << endl;
          } else cout << "Ket qua 4: (" << x << ", " << z << "), " << "(" << y << ", " << x << ")" << endl;

          }
    return 0;
}