// THỰC HÀNH 6.2
//Cho cac loại biến như hình vẽ. In ra danh sach gồm địa chỉ & giá trị tưng ứng
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 3;
    float y = 10.5;
    bool z = false;
    string s = "abc";

    int *ptr1 = &x;
    float *ptr2 = &y;
    bool *ptr3 = &z;
    string *ptr4 = &s;
    cout << "       " << " Dia chi" << "       " << " Gia tri" << endl;
    cout << "x" << "       " << ptr1 << "       " << *ptr1 << endl;
    cout << "y" << "       " << ptr2 << "       " << *ptr2 << endl;
    cout << "z" << "       " << ptr3 << "       " << *ptr3 << endl;
    cout << "s" << "       " << ptr4 << "       " << *ptr4 << endl;
    return 0;
}