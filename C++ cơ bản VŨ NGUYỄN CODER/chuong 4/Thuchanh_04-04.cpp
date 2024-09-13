/* THỰC HÀNH 04.04:
Nhập vào số giờ, phút, giây từ bàn phím. Kiểm tra xem thời gian nhập vào có hợp lệ hay ko và in kết quả ra màn hình.
Thời gian hợp lệ được quy định như sau: Giờ được tính từ 0 đến 23, phút và giây được tính từ 0 đến 59.
Ví dụ 1:
Nhap gio: 13
Nhap phut: 55
Nhap giay: 20
Ket qua: Hop le
Ví dụ 2:
Nhap gio: 13
Nhap phut: 61
Nhap giay: 20
Ket qua: Khong hop le
Do ko có phút 61 nha ae :))
*/
#include <iostream>
using namespace std;
int main() {
    int gio, phut, giay;
    cout << "Nhap gio: ";
    cin >> gio;
    cout << "Nhap phut: ";
    cin >> phut;
    cout << "Nhap giay: ";
    cin >> giay;

    if ((gio >= 0 && gio < 24) && (phut >= 0 && phut <= 59) && (giay >= 0 && giay <= 59)) {
                cout << "Ket qua: Hop le\n";
    } else {
        cout << "Ket qua: Khong hop le\n";
    }
    return 0;
}