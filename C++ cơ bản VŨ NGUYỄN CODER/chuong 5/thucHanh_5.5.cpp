// THỰC HÀNH 5.5
/*
Viết chương trình nhập vào số nguyên dương n từ bàn phím và kiểm tra xem n có phải là số hoàn hảo không, in kết quả ra màn hình
Một số hoàn hảo là một số có tổng các ước số của nó (không kể nó) bằng chính nó.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap lai\n";
        return 1;
    }
    int tong_uoc = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong_uoc += i;
        }
    }
    if (tong_uoc == n) {
        cout << n << " la so hoan hao\n";
    } else cout << n << " khong la so hoan hao\n";
    return 0;
}