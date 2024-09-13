// THỰC HÀNH 6.4
/*
Nhập giá trị cho các biến số nguyên x1, x2, x3, x4. Cho DUY NHẤT 1 biến pointer (int*) là p.
1 - In ra tất cả các giá trị của x1, x2, x3, x4 thông qua biến p 
2- In ra trung bình nhân của x1, x2, x3, x4 thông qua biến p.
Lưu ý: ko được truy cập trực tiếp vào vùng dữ liệu của x1, x2, x3, x4 nhưng được phép lấy địa chỉ của 4 biến này
Chương trình cần chạy được như hình minh hoạ
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1, x2, x3, x4;
    cout << "Nhap lan luot x1, x2, x3, x4: ";
    cin >> x1 >> x2 >> x3 >> x4;
    int *p = NULL;
    int temp = 1;
    // 1 - In ra tất cả các giá trị của x1, x2, x3, x4 thông qua biến p 
    cout << "Ket qua 1: ";
    p = &x1;
    temp *= *p;
    cout << *p << " ";
    p = &x2;
    temp *= *p;
    cout << *p << " ";
    p = &x3;
    temp *= *p;
    cout << *p << " ";
    p = &x4;
    temp *= *p;
    cout << *p << " ";
    // 2- In ra trung bình nhân của x1, x2, x3, x4 thông qua biến p.
    cout << "\nKet qua 2: " << (float)(pow(temp, 1.0/4)) << endl;
    return 0;
}