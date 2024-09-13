// 69. Sqrt(x)
#include <iostream>
#include <cmath>
using namespace std;
// thuat toan tim kiem nhi phan
int mySqrt(int x) {
    if (x == 0 || x == 1) {
        return x;
    }

    int left = 1, right = x, result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Kiểm tra xem mid^2 có bằng x không
        if (mid <= x / mid) {
            result = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}
int main()
{
    long long x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Can bac hai cua " << x << " la: " << mySqrt(x) << endl;
    return 0;
}