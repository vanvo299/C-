// THỰC HÀNH 7.5
/*
Hoàn thành chương trình cho trước sau:
https://onlinegdb.com/nqXkofmud
Cụ thể , cần viết hàm divide() để thực hiện phép chia cho 2 số nguyên a và b
Nếu số chia bằng 0, hàm trả về giá trị 0 và chương trình in ra thông báo "Phep chia ko thuc hien được cho 0"
Kết quả test cần chạy đúng như hình minh họa
*/
#include <iostream>
#include <cmath>
using namespace std;
float divide(int a, int b)
{
    if (b == 0) {
        cout << "Phep chia khong thuc hien duoc cho 0\n";
        return -1;
    } 
    float result = 1.0 * ((float) a / b);
    return result;
}
int main()
{
    cout << divide(6, 2) << "\n";
    cout << divide(-7, 2) << "\n"; 
    cout << divide(8, 0);
    return 0;
}