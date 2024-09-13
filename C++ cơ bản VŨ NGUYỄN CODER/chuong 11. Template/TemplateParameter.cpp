// Template parameter
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T1, typename T2>
void hello()
{
    cout << "Type 1: " << typeid(T1).name() << endl;
    cout << "Type 2: " << typeid(T2).name() << endl;
}

template<typename T, int length> // có thể dùng biến thông thường để đưa vào template là giá trị
// template<class T, int length> // co the dung class thay chu template, no tuong duong nhau
struct abc{
    T a[length];
};
int main()
{
    // hello<int, bool*>();

    // truyền trực tiếp số vào template
    abc<bool, 16> a;
    cout << sizeof(a) << " bytes. \n"; 
    return 0;
}