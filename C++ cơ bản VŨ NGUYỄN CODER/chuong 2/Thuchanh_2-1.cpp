//Cho các biến thông tin age, fullname, country, weight. 
//In ra đoạn văn bản giới thiệu bản thân như trong ảnh minh họa. (Ảnh ở facebook)
#include <iostream>
#include <string>
int main() {
    int age = 20;
    std::string fullname = "Maria Ozawa";
    std::string country = "Japan";
    float weight = 45.5;

    std::cout << "Xin chao. Toi la " << fullname << "." << std::endl;
    std::cout << "Toi den tu " << country << "." << std::endl;
    std::cout << "Nam nay toi " << age << " tuoi" << "." <<std::endl;
    std::cout << "Toi nang " << weight << " kg" <<  "." << std::endl;
    

    
    return 0;
}