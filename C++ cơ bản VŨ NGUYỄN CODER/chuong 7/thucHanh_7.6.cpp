// THỰC HÀNH 7.6
/*
Hoàn thành chương trình cho trước sau:
https://onlinegdb.com/xnxdC_2iR
Cụ thể, cần viết nội dung cho các hàm kiểm tra kiểu dữ liệu.
Kết quả test cần chạy đúng như hình minh họa
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void kiem_tra(int n) 
{
    if (n == 0) {
        cout << "Day la so 0\n";
    } else if(n > 0) {
        cout << "Day la so nguyen duong\n";
    }  else cout << "Day la so nguyen am\n";
}
void kiem_tra(double n)
{
      if (n > 0) {
        if (n - (int)n == 0) {
            cout << "Day la so nguyen duong\n";
        } else cout << "Day la so thuc duong\n";
      } 
      else if (n < 0) {
        if (n - (int)n == 0) {
            cout << "Day la so nguyen am\n";
        } else cout << "Day la so thuc am\n";
      }
}
void kiem_tra(string s)
{
    cout << "Day la chuoi ki tu\n";
}
int main()
{
    cout << "0\t: "; 	kiem_tra(0);
	cout << "5\t: "; 	kiem_tra(5);
	cout << "-5\t: "; 	kiem_tra(-5);
	cout << "5.5\t: "; 	kiem_tra(5.5);
	cout << "-5.5\t: "; kiem_tra(-5.5);
	cout << "-5.0\t: "; kiem_tra(-5.0);
	cout << "nam\t: "; 	kiem_tra("nam");
    return 0;
}