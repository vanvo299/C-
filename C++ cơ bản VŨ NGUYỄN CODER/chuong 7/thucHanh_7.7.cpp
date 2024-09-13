// THỰC HÀNH 7.7
/*
Cho trước đoạn code sau: https://onlinegdb.com/bLAcjply3
Hoàn thành các hàm swap để hoán đổi giá trị của 2 biến số nguyên bất kỳ
Chương trình cần vượt qua 3 bài test được định nghĩa ở hàm main.
Lưu ý: ko sửa hàm main
*/
#include <iostream>
#include <cmath>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b; 
    b = temp;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    
    {
        swap(x, y);
        cout << "Test 1: " << (x==20 && y==10 ? "Pass" : "Failed") << "\n";
    }
    {
        swap(&x, &y);
        cout << "Test 2: " << (x==10 && y==20 ? "Pass" : "Failed") << "\n";
    }
    {
        int z = 30;
        int *p1 = &x;
        int *p2 = &y;
        int *p3 = &z;
        swap(p1, p2);
        swap(p2, p3);
        cout << "Test 3: " << (x==20 && y==30 && z==10 ? "Pass" : "Failed") << "\n";
    }
    return 0;
}