// Template struct / class
/*
- Trong C++, template (mẫu) là một tính năng mạnh mẽ cho phép bạn viết mã mà không cần phải xác định kiểu cụ thể 
cho dữ liệu mà mã đó làm việc. Templates giúp tạo ra các hàm và lớp có thể hoạt động với nhiều kiểu dữ liệu khác 
nhau mà không cần phải viết lại mã cho từng kiểu.
- Có hai loại Template chính trong C++:
+ Function Template
+ Class Template

*/
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <typename T>
struct Point {
    T x;
    T y;

    void showPoint() 
    {
        cout << "Type of point: " << typeid(T).name() << endl;
    }
};

int main()
{
    Point<int> point;
    point.x = 10;
    point.y = 20;
    point.showPoint();

    Point<string> point_2;
    point_2.x = "30";
    point_2.y = "40";
    point_2.showPoint();
   return 0;
}