// Template function
/*
- Trong C++, template (mẫu) là một tính năng mạnh mẽ cho phép bạn viết mã mà không cần phải xác định kiểu cụ thể 
cho dữ liệu mà mã đó làm việc. Templates giúp tạo ra các hàm và lớp có thể hoạt động với nhiều kiểu dữ liệu khác 
nhau mà không cần phải viết lại mã cho từng kiểu.
- Có hai loại Template chính trong C++:
+ Function Template
+ Class Template
*/
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void hello()
{
    cout << "Type: " << typeid(T).name() << "; ";
    cout << "Byte: " << sizeof(T) << " byte\n";
}
int main()
{
    hello<char>(); // Type: char; Byte: 1 byte
    hello<int>(); // Type: int; Byte: 4 byte
    return 0;
}