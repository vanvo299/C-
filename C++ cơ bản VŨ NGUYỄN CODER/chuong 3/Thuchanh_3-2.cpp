/*
Viết chương trình nhập bán kính, in ra chu vi và diện tích hình tròn. 
Biết số Pi = 3.14
*/
#include <iostream>
#include <cmath>
int main()
{
    const float PI = 3.14;
    float ban_kinh;
    std::cout << "Nhap ban kinh hinh tron: ";
    std::cin >> ban_kinh;

    float chu_vi = 2*PI*ban_kinh;
    float dien_tich = PI * pow(ban_kinh,2);
    
    std::cout << "Chu vi hinh tron la: " << chu_vi << std::endl;
    std::cout << "Dien tich hinh tron la: " << dien_tich << std::endl;
    return 0;
}