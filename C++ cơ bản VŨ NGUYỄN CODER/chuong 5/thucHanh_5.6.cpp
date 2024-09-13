// THỰC HÀNH 5.6
/*
Nhập n từ bàn phím
Tìm số nguyên dương X nhỏ nhất sao cho (1 + 2 + 3 + … + X) > n
In X ra màn hình
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int tong = 0;
    int x;
    for (int i = 1; i < n; i++) {
        tong += i;
        if (tong > n) {
            cout << "X nho nhat la: " << i << endl;
            break;
        }
    }
    return 0;
}