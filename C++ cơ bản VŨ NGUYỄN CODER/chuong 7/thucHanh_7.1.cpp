// THỰC HÀNH 7.1
/*
Nhập vào 3 số a,b,c. Viết các function sau:
1 - program_1()
Input: 3 số a, b, c vừa nhập
Output: Trung bình cộng của 3 số a, b, c
2 - program_2()
Input: 3 số a, b, c vừa nhập
Output: Số lớn nhất trong 3 số a, b, c
Kết quả cần chạy được như hình minh hoạ
*/
#include <iostream>
#include <cmath>
using namespace std;
float program_1(float a, float b, float c)
{
    float trung_binh_cong = (a + b + c) / 3;
    return trung_binh_cong;
}
float program_2(float a, float b, float c)
{
    float max;
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else max = c;
    return max;
}
int main()
{
    float a, b, c;
    cout << "Nhap lan luot 3 so a, b, c: "; 
    cin >> a >> b >> c;
    cout << "Trung binh cong cua 3 so " << a << " " << b << " " << c << " la: " << program_1(a, b, c) << endl;
    cout << "So lon nhat la: " << program_2(a, b, c) << endl;

    return 0;
}