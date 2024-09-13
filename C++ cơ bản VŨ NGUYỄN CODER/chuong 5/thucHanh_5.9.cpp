// THỰC HÀNH 5.9
/*
Dùng vòng lặp for hoặc while để in ra bảng cửu chương từ 1 đến 10. Có 2 loại:
1. Chia theo hàng
2. Chia theo cột
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << j << "x" << i << "=" << j * i << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << "x" << j << "=" << i*j << "\t";
            
        }
        cout << endl;
    }
    return 0;
}