// THỰC HÀNH 5.11
/*
Nhập m và n từ bàn phím
Vẽ hình chữ nhật kích thước m x n bằng kí tự sao (*) có đặc điểm như sau:
1 - Hình chữ nhật đặc 
2 - Hình chữ nhật rỗng 
3 - Hình chữ nhật lưới (m, n lẻ)    
*/
#include <iostream>
using namespace std;
int main()
{
    int m, n; 
    cout << "Nhap m: "; cin >> m;
    cout << "Nhap n: "; cin >> n;
    // 1 - Hình chữ nhật đặc 
    cout << "Cau 1\n";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 2 - Hình chữ nhật rỗng 
    cout << "Cau 2\n";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == m || j == 1 || j == n) {
                cout << "* ";
            } else cout << "  ";
        }
        cout << endl;
    }

    // 3 - Hình chữ nhật lưới (m, n lẻ)    
    cout << "Cau 3\n";
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                cout << "  ";
            } else cout << "* ";
        }
        cout << endl;
    }
    return 0;
}