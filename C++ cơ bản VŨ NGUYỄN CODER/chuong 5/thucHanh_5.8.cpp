// THỰC HÀNH 5.8
/*
(Lưu ý: ko dùng kiểu dữ liệu kí tự char hoặc std::string)
Nhập 1 số nguyên dương n từ bàn phím
Nhập 1 số nguyên dương n từ bàn phím
1 - In ra các chữ số đảo ngược lại của n
2 - Tính số chữ số có trong số n.
3 - Tính tổng các chữ số
4 - Nhập tiếp từ bàn phím vị trí của chữ số mà bạn muốn lấy,
nếu vị trí ko tồn tại thì in ra thông báo "Ko ton tai vi tri nay" .
Vị trí tính từ trái sang và bắt đầu từ 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int cau1 = n;
    int cau2 = n;
    int cau4 = n;
    // 1 - In ra các chữ số đảo ngược lại của n
    int sum = 0;
    while(n != 0) {
        int chuso = n % 10;
        sum = sum * 10 + chuso;
        n /= 10;
    }
    cout << "Cac chu so dao nguoc cua n la: " << sum << endl;
    // 2 - Tính số chữ số có trong số n.
    int count = 0;
    while(cau1 != 0) {
    count++;
    cau1 /= 10;
    }
    cout << " co " << count << " chu so" << endl;
    // 3 - Tính tổng các chữ số
    int Tong = 0;
    while (cau2 != 0) {
        int chuso = cau2 % 10;
        Tong += chuso;
        cau2 /= 10;
    }
    cout << "Tong cac chu so la: " << Tong << endl;
    // 4 - Nhập tiếp từ bàn phím vị trí của chữ số mà bạn muốn lấy,
// nếu vị trí ko tồn tại thì in ra thông báo "Ko ton tai vi tri nay" .
// Vị trí tính từ trái sang và bắt đầu từ 1
int pos;
cout << "Nhap vi tri: ";
cin >> pos;
if (pos > count) {
    cout << "Khong ton tai vi tri nay\n";
    return 1;
}
int count2= 0;
    while(cau4 != 0) {
    count2++;
    if (count2 == pos) {
        cout << "Ket qua la: " << cau4%10 << endl;
        return 0;
    }
    cau4 /= 10;
    }

    return 0;
}