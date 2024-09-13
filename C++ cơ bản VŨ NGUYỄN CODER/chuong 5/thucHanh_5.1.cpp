//  THỰC HÀNH 5.1
/*
Viết chương trình nhập số nguyên dương n
In ra màn hình:
1. Các số chẵn từ 1 đến n
2. Các số từ 1 đến n mà chia hết cho 3
3. Các số lẻ từ 1 đến n mà chia hết cho 3
4. Các số từ -n đến n và chia hết cho 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    // 1. In ra cac so chan tu 1 den n
    cout << "Cac so chan tu 1 den " << n << " la: "; 
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << "  ";
        }
    }
    // 2. In ra cac so tu 1 den n ma chia het cho 3
    cout << "\nCac so tu 1 den " << n << " ma chia het cho 3 la: ";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << "  ";
        }
    }
    // 3. In ra cac so le tu 1 den n ma chia het cho 3
    cout << "\nCac so le tu 1 den " << n << " ma chia het cho 3 la: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            cout << i << "  ";
        }
    }
    // 4. In ra cac so tu -n den n va chia het cho 5
    cout << "\nCac so tu " << -n << " den " << n << " va chia het cho 5 la: ";
    for (int i = -n; i <= n; i++) {
        if (i % 5 == 0) {
            cout << i << "  ";
        }
    }
    return 0;
}