/* THỰC HÀNH 04.02:
Nhập số tháng trong năm
Kiểm tra xem tháng đó có hợp lệ hay ko? Nếu có, thì in ra quý tương ứng và số ngày trong tháng đó
Chương trình cần chạy được như hình minh hoạ
*/
#include <iostream>
using namespace std;
int main() {
    int thang;
    cout << "Nhap thang: ";
    cin >> thang;
    switch (thang)
    {
    case 1:
    case 3:
    cout << "Thang " << thang << " thuoc quy 1 va co 31 ngay\n"; 
        break;
    case 5: 
        cout << "Thang " << thang << " thuoc quy 2 va co 31 ngay\n"; 
        break;
    case 7:
    case 8:
         cout << "Thang " << thang << " thuoc quy 3 va co 31 ngay\n"; 
         break;
    case 10:
    case 12:
        cout << "Thang " << thang << " thuoc quy 4 va co 31 ngay\n"; 
        break;
    
    case 4:
    case 6:
        cout << "Thang " << thang << " thuoc quy 2 va co 30 ngay\n";
        break; 
    case 9:
        cout << "Thang " << thang << " thuoc quy 3 va co 30 ngay\n";
        break; 
    case 11:
        cout << "Thang " << thang << " thuoc quy 4 va co 30 ngay\n";
        break; 

    case 2:
        cout << "Thang " << thang << " thuoc quy 1 va co 28 hoac 29 ngay\n";
        break; 
    default:
        cout << "Thang khong hop le\n";
        break;
    }
    return 0;
}