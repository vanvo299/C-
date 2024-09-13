// THỰC HÀNH 7.3
/*
Viết các function tính toán hình hộp chữ nhật. Các function đều có Input là cạnh đáy a, b và chiều cao h.
Các Output tương ứng với các function sẽ như sau:
1 - program_1(): Thể tích của hình hộp
2 - program_2(): Diện tích xung quanh
3 - program_3(): Diện tích toàn phần
4 - program_4(): Chu vi
Test lại các function theo 1 số ví dụ trong hình minh hoạ
*/
#include <iostream>
#include <cmath>
using namespace std;
float program_1(float a, float b, float h)
{
    float V_hinh_hop = a * b * h;
    return V_hinh_hop;
}
float program_2(float a, float b, float h)
{
    float S_xq = (a + b) * 2 * h;
    return S_xq;
}
float program_3(float a, float b, float h)
{
    float S_tp = (a + b) * 2 * h + 2 * a * b;
    return S_tp;
}
float program_4(float a, float b, float h) 
{
    float P = 4 * (a + b + h);
    return P;
}
int main()
{
    float a, b, h;
    std::cout << "Nhap lan luot a, b, h: ";
    std::cin >> a >> b >> h;
    std::cout << "Ket qua 1 - The tich: " << program_1(a, b, h) << "\n";
    std::cout << "Ket qua 2 - Dien tich xung quanh: " << program_2(a, b, h) << "\n";
    std::cout << "Ket qua 3 - Dien tich toan phan: " << program_3(a, b, h) << "\n";
    std::cout << "Ket qua 4 - Chu vi: " << program_4(a, b, h) << "\n";

    return 0;
}