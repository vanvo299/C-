// THỰC HÀNH 6.3
/*
Nhập giá trị cho 2 biến x và y là số thực. Cho 2 biến pointer p và q liên kết đến x và y ở trên.
Thực hiện tính trung bình cộng 2 số thông qua p và q. 
Kết quả cần đạt như hình minh hoạ
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float x, y;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
    float *p = &x;
    float *q = &y; 
    float TBC = (*p + *q) / 2;
    cout << "Trung binh cong cua hai so " << x << " va " << y << " la: " << TBC << endl;
    return 0;
}