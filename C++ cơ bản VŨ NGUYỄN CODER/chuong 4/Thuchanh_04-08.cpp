/* THỰC HÀNH 04.08:
Viết chương trình tính tiền cước TAXI. Biết rằng:
km đầu tiên là 15000đ
từ km số 2 đến km30 là 13000đ
Nếu lớn hơn 30km thì mỗi km thêm sẽ là 10000đ
Hãy nhập số km từ bàn phím sau đó in ra số tiền phải trả
Ví dụ:
Nhap so km: 2
So tien phai tra: 28000
Nhap so km: 32
So tien phai tra: 412000
*/
#include <iostream>
using namespace std;
int main() {
    int km;
    cout << "Nhap so km: ";
    cin >> km;
    int Tien;
    if (km <= 0) {
        cout << "Nhap khong hop le\n";
        return 1;
    }
    if (km <= 30) {
        Tien = 15000 + (km - 1) * 13000;
    } else {
        Tien = 15000 + (30 - 1) * 13000 + 10000 * (km - 30);
    } 
    cout << "So tien phai tra la: " << Tien << endl;
    return 0;

}