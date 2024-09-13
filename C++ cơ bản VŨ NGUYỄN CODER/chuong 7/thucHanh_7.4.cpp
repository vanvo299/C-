// THỰC HÀNH 7.4
/*
Nhập 1 số x, Viết các function sau để kiểm tra các tính chất của số đó
1 - program_1()
Input: giá trị x vừa nhập
Output: true (là số chẵn) / false (là số lẻ)
2 - program_2()
Input: giá trị x vừa nhập
Output: true (là số dương) / false (là số âm)
3 - program_3()
Input: giá trị x vừa nhập
Output: true (là số nguyên tố) / false (ko là số nguyên tố)
Chương trình cần đạt kết quả như hình
*/
#include <iostream>
#include <cmath>
using namespace std;
int program_1(int x)
{
    if (x % 2 == 0) {
        return 1;
    } return 0;
}

int program_2(int x)
{
    if (x >= 0) {
        return 1;
    } return 0;
}
int program_3(int x)
{
    if (x <= 1) {
        return 0;
    }
   for (int i = 2; i <= sqrt(x); i++) {
       if (x % i == 0) {
        return 0;
       } return 1;
   }
    
}
int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Ket qua 1: ";
    if (program_1(x)) {
        cout << "So chan\n";
    } else cout << "So le\n";
    cout << "ket qua 2: ";
    if (program_2(x)) {
        cout << "So duong\n";
    } else cout << "So am\n";
    cout << "Ket qua 3: ";
    if (program_3(x)) {
        cout << "So nguyen to\n";
    } else cout << "Khong la so nguyen to\n";
    return 0; 
}