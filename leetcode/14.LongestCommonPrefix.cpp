// 14. Longest Common Prefix
// Viết hàm tìm chuỗi tiền tố chung dài nhất trong một mảng các chuỗi.
/*
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
*/
// Thuật toán: 
/*
1. Khởi tạo một chuỗi trống ans để lưu tiền tố chung.
2. Sắp xếp danh sách đầu vào strs theo từ điển. Bước này là cần thiết vì tiền tố chung phải chung cho tất cả các chuỗi, 
vì vậy chúng ta cần tìm tiền tố chung của chuỗi đầu tiên và chuỗi cuối cùng trong danh sách đã sắp xếp.
3. Lặp lại các ký tự của chuỗi đầu tiên và chuỗi cuối cùng trong danh sách đã sắp xếp, dừng ở độ dài của chuỗi ngắn hơn.
4. Nếu ký tự hiện tại của chuỗi đầu tiên không bằng ký tự hiện tại của chuỗi cuối cùng, hãy trả về tiền tố chung được tìm thấy cho đến nay.
Ngược lại, hãy thêm ký tự hiện tại vào chuỗi ans.
Trả về chuỗi ans chứa tiền tố chung dài nhất.
*/
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

std::string Longest_common_prefix(std::vector<std::string>& strs) 
{
    std::string ans = "";
    if (strs.empty()) return "";
    sort(strs.begin(), strs.end());
    int n = strs.size();
    std::string first = strs[0], last = strs[n - 1];
    for (int i = 0; i < std::min(first.size(), last.size()); i++) {
        if (first[i] != last[i]) {
           break;
        } else ans += first[i];
    }
    return ans;
}

int main()
{
    int so_luong_phan_tu_trong_vecto;
    std::cout << "Nhap so luong tu can kiem tra: ";
    std::cin >> so_luong_phan_tu_trong_vecto;
    std::vector<std::string> strs(so_luong_phan_tu_trong_vecto);
    std::cout << "Nhap cac ki tu can kiem tra: ";
    for (int i = 0; i < so_luong_phan_tu_trong_vecto; i++) {
        std::cin >> strs[i];
    }
    std::cout << "Tien to chung dai nhat la: " << Longest_common_prefix(strs) << std::endl;
    return 0;
}
