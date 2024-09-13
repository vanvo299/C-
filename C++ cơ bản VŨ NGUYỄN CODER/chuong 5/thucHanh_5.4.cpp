// THỰC HÀNH 5.4
/*
Viết chương trình nhập vào hai số nguyên dương a và b từ bàn phím.
 Tìm ước số chung lớn nhất (UCLN) và bội số chung nhỏ nhất (BCNN) của a và b và in ra màn hình.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Nhap hai so nguyen duong: ";
    int a, b; 
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "So khong hop le\n";
        return 1;
    }
    int A = a, B = b;
    while(a != b) {
        if (a > b) {
            a = a - b;
        } else b = b - a;
    }
    int GCD = a;
    int LCM = (A * B) / GCD; 
    cout << "Uoc chung lon nhat la: " << GCD;
    cout << "\nBoi chung nho nhat la: " << LCM;
    return 0;
}