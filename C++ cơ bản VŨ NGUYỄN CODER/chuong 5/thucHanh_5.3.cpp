// THỰC HÀNH 5.3
/*
Viết chương trình nhập số nguyên dương n.
1 - In ra tất cả các số mà n có thể chia hết từ 1 đến n
2 - Đếm xem có bao nhiêu số được in ra ở câu 1 và in ra kết quả đếm được
3 - Kiểm tra xem số n có phải số nguyên tố hay ko? 
(Số nguyên tố là số khác 1, và nó không chia hết cho bất kì số nào ngoại trừ 1 và chính nó)  
*/
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    if (n <= 1) {
        return 1;
    }
    // 1 - In ra tất cả các số mà n có thể chia hết từ 1 đến n
    cout << "Cac so " << n << " co the chia het tu 1 den " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << "  ";
        }
    }
    // 2 - Đếm xem có bao nhiêu số được in ra ở câu 1 và in ra kết quả đếm được
    int count = 0;
    for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
            count++;
        }
    }
    cout << "\nKet qua dem duoc la: " << count << endl;
    // 3 - Kiểm tra xem số n có phải số nguyên tố hay ko? 
    int check = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            check = 1;
        } else check = 0;
    }
    if (check == 1) {
        cout << n << " khong la so nguyen to\n";
    } else cout << n << " la so nguyen to\n";
    return 0;
}