// THỰC HÀNH 5.12
/*
Nhập n là 1 số nguyên dương.
Vẽ tam giác cân có độ dài cạnh n như sau:
1 - Tam giác cân đặc ruột 0, lệch phải
2 - Tam giác cân đặc ruột 0, viền 1, lệch phải
Xem hình minh họa để rõ yêu cầu đề bài.
*/
#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Nhap n: "; cin >> n;
    // 1 - Tam giác cân đặc ruột 0, lệch phải
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i + j >= n) {
                cout << "0 ";
            } else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}