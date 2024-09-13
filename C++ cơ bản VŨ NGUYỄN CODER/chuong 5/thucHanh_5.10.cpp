// THỰC HÀNH 5.10
/*
Nhập n là 1 số nguyên từ 0 đến 9
Vẽ hình vuông có độ dài n như sau:
1. Hình vuông các chữ số thập phân tăng giảm đan xen 
2. Hình vuông nhị phân ruột 0 viền 1 
3. Hình vuông nhị phân ruột 1 có một đường chéo số 0 
4. Hình vuông nhị phân ruột 1 có hai đường chéo số 0 
5. Hình vuông nhị phân đan xen 
6. Hình vuông thập phân đường chéo 0 
Xem hình minh họa để rõ yêu cầu đề bài.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Cau 1\n";
    //1. Hình vuông các chữ số thập phân tăng giảm đan xen 
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            for (int j = 9; j >= 0; j--) {
                cout << j << " ";
            } 
            } else {
                for (int k = 0; k <= 9; k++) {
                    cout << k << " ";
                }
        }
        cout << endl;
    }
    cout << "\n";
    // 2. Hình vuông nhị phân ruột 0 viền 1 
    cout << "Cau 2\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i == 1 || i == 10 || j == 1 || j == 10) {
                cout << "1" << " ";
            } else {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    // 3. Hình vuông nhị phân ruột 1 có một đường chéo số 0 
    cout << "Cau 3\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i == j) {
                cout << "0" << " ";
            } else cout << "1" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 4. Hình vuông nhị phân ruột 1 có hai đường chéo số 0 
    cout << "Cau 4\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i == j || i + j == 11) {
                cout << "0" << " ";
            } else cout << "1" << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 5. Hình vuông nhị phân đan xen 
    cout << "Cau 5\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i % 2 == 0 && j % 2 != 0 || i % 2 != 0 && j % 2 == 0) {
                cout << "1" << " ";
            } else cout << "0" << " ";
        }
        cout << endl;
    }
    cout << "\n";
    // 6. Hình vuông thập phân đường chéo 0 
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            cout << abs(i - j) << " ";
        }
        cout << endl;
    }
    return 0;
}