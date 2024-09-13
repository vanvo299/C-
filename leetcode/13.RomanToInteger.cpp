// 13. Roman to Integer (Chuyển kí tự la mã thành số nguyên)
#include <iostream>
#include <map>
#include <string>
 int Roman_to_int(std::string s)
 {
    std::map<char, int> Roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int sum = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (i < s.length() - 1 && Roman[s[i]] < Roman[s[i + 1]]) {
            sum -= Roman[s[i]];
        } else sum += Roman[s[i]];
    } return sum;
 }
int main()
{
    std::string s;
    std::cout << "Nhap so duoi dang la ma: ";
    std::cin >> s;
    std::cout << "So chuyen tu so la ma sang so nguyen la: " << Roman_to_int(s) << std::endl;
}
