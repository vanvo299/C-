// 58. Length of Last Word
// Cho một chuỗi bao gồm các từ và dấu cách, trả về số kí tự của từ cuối cùng
#include <iostream>
#include <string>
int lengthOfLastWord(std::string s)
{
     int j = 0;
    int dem = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ' ' && j == 1)
        break;
        else if (s[i] != ' ') {
            j = 1;
            dem++;
        }
    } 
    return dem;
}
int main()
{
    std::string s;
    std::cout << "nhap chuoi can kiem tra: ";
    getline(std::cin, s);
    std::cout << "So luong ki tu cua tu cuoi cung trong day la: " << lengthOfLastWord(s);
    return 0;
}