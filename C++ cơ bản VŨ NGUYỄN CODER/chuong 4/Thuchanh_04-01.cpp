/* THỰC HÀNH 04.01:
Nhập số chia x và số bị chia y.
In ra kết luận x có chia hết cho y hay ko? Nếu ko, in ra số dư. Nếu số bị chia bằng 0 thì in ra thông báo ko hợp lệ
Chương trình cần chạy như hình minh hoạ
*/
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Nhap so chia x: ";
    cin >> x;
    cout << "Nhap so bi chia y: ";
    cin >> y;
    if (y == 0) {
        cout << "Phep chia khong hop le\n";
    }

    if (x % y == 0) {
        cout << x << " chia het cho " << y << endl;
    } 
    else if (x % y != 0) {
        cout << x << " khong chia het cho " << y << ". Va so du la: " << (x % y) << endl;
    }
    return 0;
}