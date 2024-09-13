// 20. Valid Parentheses (Kiểm tra dấu ngoặc nhập vào có hợp lệ không)
/*
THUẬT TOÁN:
Hàm sẽ đẩy mỗi dấu ngoặc mở vào ngắn xếp và khi gặp dấu ngoặc đóng, nó sẽ kiểm tra xem dâú ngoặc đầu ngăn xếp có phù hợp không.
Nếu không thì hàm trả về false. Cuối cùng, nếu tất cả các dấu ngoặc đều hợp lệ, ngăn xếp sẽ trống và hàm trả về true.
Nếu còn dấu ngoặc mở không hợp lệ nào đó, hàm sẽ trả về false.
*/
#include <iostream>
#include <map>
#include <string>
#include <stack>
bool Vaid_parentheses(std::string s)
{
    std::stack<char> valid;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            valid.push(s[i]);
        } else {
            if (valid.empty()) {
                return false;
            }

            if (s[i] == ')' && valid.top() != '(' ||
                s[i] == ']' && valid.top() != '[' ||
                s[i] == '}' && valid.top() != '{') {
                return false;
            }

            valid.pop();
        }
    }

    return valid.empty();
} 

int main()
{
    std::stack<char> valid;
    std::string s;
    std::cout << "Nhap cac dau ngoac de kiem tra: ";
    std::cin >> s;
    if (Vaid_parentheses(s) == true) {
        std::cout << "true" << std::endl;
    } else std::cout << "false" << std::endl;
    return 0;
}