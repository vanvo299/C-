/*
Cho các mệnh đề logic sau:
bool a; // Tôi chén Ngọc Trinh
bool b; // Tôi chén Maria Ozawa
Biểu diễn các mệnh đề logic dưới đây dưới dạng là phép toán kết hợp với các mệnh đề a và b ở trên
bool c = ???; // Tôi chén cả Ngọc Trinh và Maria Ozawa rồi
bool d = ???; // Tôi chén ít nhất 1 trong 2 người là Ngọc Trinh hoặc Maria Ozawa
bool e = ???; // Tôi chỉ chén Ngọc Trinh
bool f = ???; // Tôi chén duy nhất 1 người trong 2 người hoặc là NGọc Trinh hoặc là Maria Ozawa
Chương trình test: Nhập lần lượt giá trị của mệnh đề a, b. In ra kết quả của các mệnh đề c, d, e, f.
Chương trình cần chạy như hình minh hoạ
*/
#include <iostream>
int main() {
    bool a, b;
    std::cout << "(a) Toi muon chen Ngoc Trinh: ";
    std::cin >> a;
    std::cout << "(b) Toi muon chen Ozawa: ";
    std::cin >> b;

    bool c = a && b;
    bool d = a || b;
    bool e = a && !b;
    bool f = (!a && b) || (a && !b);
    std::cout << "Bang ket qua: \n";
    std::cout << "(c) " << c << std::endl;
    std::cout << "(d) " << d << std::endl;
    std::cout << "(e) " << e << std::endl;
    std::cout << "(f) " << f << std::endl;
    return 0;
}