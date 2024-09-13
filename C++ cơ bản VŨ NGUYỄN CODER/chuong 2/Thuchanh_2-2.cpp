/*
Viết chương trình nhập từ bàn phím các thông tin sau và lưu vào các biến có kiểu dữ liệu tương ứng:
Tên: std::string
Năm sinh: int
Quê quán: std::string
Chiều cao (m): float
Cân nặng (kg): float
Tinh trạng hôn nhân: bool (1 - đã kết hôn; 0 - chưa kết hôn)
Kết quả tốt nghiệp THPT: char (G - Giỏi, K - Khá, T - Trung bình)
In ra tờ khai Sơ yếu lí lịch tương ứng với các dữ liệu đã nhập. Kết quả chạy được cần giống như hình minh họa
*/


#include <iostream>
#include <string>
int main() {
    std::string ten;
    int nam_sinh;
    std::string que_quan;
    float chieu_cao;
    float can_nang;
    bool tinh_trang_hon_nhan;
    char ket_qua_tot_nghiep;

    std::cout << "Nhap ho ten: ";
    std::getline(std::cin, ten);
    std::cout << "Nhap nam sinh: ";
    std::cin >> nam_sinh;
    std::cin.ignore();
    std::cout << "Nhap que quan: ";
    std::getline(std::cin, que_quan);
    std::cout << "Nhap chieu cao: ";
    std::cin >> chieu_cao;
    std::cout << "Nhap can nang: ";
    std::cin >> can_nang;
    std::cout << "Nhap tinh trang hon nhan: ";
    std::cin >> tinh_trang_hon_nhan;
    std::cout << "Nhap xep loai tot nghiep: ";
    std::cin >> ket_qua_tot_nghiep;
    std::cout << "\n";
    std::cout << "*****************************" << "\n";
    std::cout << "********SO YEU LY LICH*******" << "\n";
    std::cout << "*****************************" << "\n";

    std::cout << "Ho ten: " << ten << "\n";
    std::cout << "Nam sinh: " << nam_sinh << "\n";
    std::cout << "Que quan: " << que_quan << std::endl;
    std::cout << "Chieu cao: " << chieu_cao << " m" << std::endl;
    std::cout << "Can nang: " << can_nang << " kg" << std::endl;
    std::cout << "Tinh trang hon nhan: " << tinh_trang_hon_nhan << std::endl;
    std::cout << "Xep loai tot nghiep: " << ket_qua_tot_nghiep << std::endl;
    std::cout << "*****************************" << std::endl;
    std::cout << "\n\n\n";
    return 0;
}