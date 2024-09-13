//Nhập xuất dữ liệu trong C/C++
//---------------------------------------------------------------------------
/*

**Vocabulary:
- Input: Dữ liệu vào
- Process: Xử lí dữ liệu
- Output: Dữ liệu kết quả


 *Trong C++:
 - Nhóm chức năng cần khai báo: <iostream>
 - Lệnh xuất dữ liệu: cout <<
 - Lệnh nhập dữ liệu: cin >>
 - Lệnh nhập dữ liệu theo định dạng dòng: std::getline(std::cin, <tên biến>) (dành cho nhập chuỗi kí tự)
 - Lệnh xóa bộ đệm: cin.ignore()


 *Trong C:
 - Để phục vụ một số bạn vẫn muốn theo chuẩn ngôn ngữ C (cũ hơn so với C++),
  bài giảng này sẽ giới thiệu cách nhập xuất dữ liệu cho biến theo hướng C
 + Thư viện cần khai báo: <stdio.h>
 + Lệnh xuất: printf()
 + Lệnh nhập: scanf()
 + Để xóa bộ đệm, trong C không dùng được cin.ignone(), thì ta dùng một đoạn mã bổ sung (đó là một biểu thức chính quy - regular expression),
  VD: scanf("%[^\n]s", <tên biến>);
 + LƯU Ý: Nhập dữ liệu cho kiểu dữ liệu char, không cần dùng dấu &
*/

//VD:  
#include <iostream>
#include <string>
int main() 
{
	std::string name;
	int age;

	std::cout << "Nhap tuoi: ";
	std::cin >> age;
	// **LƯU Ý: trong tình huống vừa dùng cin xong dùng getline thì c++ sẽ bị lỗi, 
	// cần dùng cin.ignore(); để xóa bộ đệm, chương trình mới chạy như bình thường
	std::cin.ignore(); // Dùng cin.ignore() để xóa bộ đệm
	std::cout << "Nhap ten: ";
	std::getline(std::cin, name); // getline dùng để nhập chuỗi kí tự có dấu cách ở giữa các kí tự
	
	std::cout << "Ten: " << name << std::endl;
	std::cout << "Tuoi: " << age << std::endl;
	return 0;
}