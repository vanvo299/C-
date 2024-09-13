/* THỰC HÀNH 3.4:
Viết chương trình nhập vào một số có 3 chữ số, in ra số đảo ngược.
Chương trình cần chạy được như hình minh họa
*/
#include <iostream>
int main() {
    int nums; // khởi tạo số có 3 chữ số
    std::cout << "Nhap so co 3 chu so: ";
    std::cin >> nums;
    
    // đảo ngược số
    int n1 = nums % 10;
    int n2 = (nums / 10) % 10;
    int n3 = (nums / 100) ;

    std::cout << "So dao nguoc la: " << n1 << n2 << n3;


    return 0;
}