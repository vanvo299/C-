// 28. Find the Index of the First Occurrence in a String
// Cho hai chuỗi vd chuỗi 1 và chuỗi 2, trả về chỉ số xuất hiện đầu tiên của chuỗi 2 trong chuôi 1 hoặc 
// trả về -1 nếu chuỗi hai không có trong chuỗi 1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int strStr(std::string haystack, std::string needle)
{
     if (haystack.empty() || needle.empty()) return -1;
    int n = haystack.size(), m = needle.size();
    for (int i = 0; i < std::min(n, m); i++) {
        if (haystack.substr(i, m) == needle) return i;
    } return haystack.find(needle);
}
// Note: 
/*
- Hàm substr trong C++ được sử dụng để trích xuất một phần của chuỗi (substring) từ một vị trí bắt đầu và có độ dài xác định.
- Syntax: string.substr(start, length);
Trong đó:

start: Vị trí bắt đầu của chuỗi con (bắt buộc).
length: Độ dài của chuỗi con (bắt buộc)
*/
/*
- Hàm find() trong C++ được sử dụng để tìm vị trí xuất hiện đầu tiên của một chuỗi con trong một chuỗi khác
*/
int main()
{
    std::string haystack, needle;
    std::cout << "Nhap chuoi 1: ";
    std::cin >> haystack;
    std::cout << "Nhap chuoi 2: ";
    std::cin >> needle;
    std::cout << "index = " << strStr(haystack, needle);
    return 0;
}