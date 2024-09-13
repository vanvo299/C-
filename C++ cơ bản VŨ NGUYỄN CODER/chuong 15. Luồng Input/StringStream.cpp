// String stream 
#include <iostream>
#include <string>
#include <sstream> // thư viện cần khai báo khi dùng string stream
using namespace std;

int main()
{
    string s;
    stringstream ss("2 4");
    // nhập dữ liệu từ một chuỗi
    int x, y;
    // cin >> x >> y;
    // ss >> x >> y; // với getline thì dùng tương tự

    // s = "Vu Nguyen Coder " + to_string(123)  + to_string(true);
    ss << "Vu Nguyen Coder " << 123 << ' ' << true << endl;
    // cout << "x + y = " << x + y << endl;
    cout << ss.str(); // chuyen doi stringstream thanh 1 chuoi 
    return 0;
}