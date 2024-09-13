// Xử lý string trong luồng IO
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int x = 123;
    string s = "abc";
    cout << left << setfill('_') << setw(6) << x << "|" << right << setw(6) << s << "."; 
    //setw() được sử dụng để thiết lập độ rộng tối thiểu của một trường đầu ra cho dữ liệu tiếp theo trong luồng đầu ra.
    // left hoặc right dùng để chỉ định dữ liệu sẽ được dồn về phía bên nào

    // setfill() được sử dụng để thiết lập ký tự lấp đầy khi in ra các giá trị với độ rộng cố định được thiết lập bằng setw().
    return 0;
}