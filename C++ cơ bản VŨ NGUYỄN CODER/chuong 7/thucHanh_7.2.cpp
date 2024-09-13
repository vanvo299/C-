// THỰC HÀNH 8.2
/*
1 - Viết function sau đổi từ độ C sang độ F
program()
Input: Giá trị độ C
Output: Giá trị độ F
2 - In ra bảng quy đổi từ 0 đến 10 độ C ra độ F
3 - Nhập vào 1 giá trị độ C bất kỳ, in ra màn hình Console giá trị độ F tương ứng
*/
#include <iostream>
#include <cmath>
using namespace std;
float program(float C)
{
    float F = C * 9/5 + 32;
    return F;
}
int main()
{
    cout << "Ket qua 1: " << endl;
    for (int i = 0; i <= 10; i++) {
        cout << "\t" << i << " (C) = " << program(i) << " (F)\n";
    }

    float do_C;
    cout << "Nhap do C: ";
    cin >> do_C;
    cout << "Ket qua 2: " << program(do_C) << endl;

    return 0;
}