// THỰC HÀNH 5.7
/*
Biết hàm số f(x) có dạng như sau:
- f(x) = 2x^2 + 5x + 9 khi x >= 5
- f(x) = -2x^2 + 4x – 9 khi x < 5
Tính tổng F(n) = f(1) + f(2) + ... + f(n). với n đc nhập từ bàn phím
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    cout << "Nhap n: ";
    cin >> n;
    float F = 0;
    for (int i = 1; i <= n; i++) {
        if (i >= 5) {
            F += 2 * pow(i, 2) + 5 * i + 9;
        } else {
            F += -2 * pow(i, 2) + 4 * i - 9;
        }
    }
    cout << "Ket qua: " << F << endl;
    return 0;
}