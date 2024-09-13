/*THỰC HÀNH 3.1:  
Nhập 2 số thực x và y.
Tính giá trị các biểu thức toán học như hình dưới.
Kết quả cần đạt như hình 2, 3
*/
#include <iostream>
#include <cmath>
int main() {
    float x, y; // khởi tạo hai biến x và y
    std::cout << "Nhap x: " ;
    std::cin >> x;
    std::cout << "Nhap y: " ;
    std::cin >> y;

    float ket_qua_1, ket_qua_2, ket_qua_3;
    
    //Tính kết quả 1
    ket_qua_1 = x*y + x * 1.0/y;
    
    //Tính kết quả 2
    float a = 1.0/(x+y);
    ket_qua_2 = x + 1.0/(x + 1.0/(x + a));

    // Tính kết quả 3
    float b = pow((5*x + 1), 3);
    float c = pow((3*x + 2*y), 2);
    ket_qua_3 = sqrt(b*c);

    std::cout << "Ket qua 1: " << ket_qua_1 << std::endl;
    std::cout << "Ket qua 2: " << ket_qua_2 << std::endl;
    std::cout << "Ket qua 3: " << ket_qua_3 << std::endl;


    return 0;
}