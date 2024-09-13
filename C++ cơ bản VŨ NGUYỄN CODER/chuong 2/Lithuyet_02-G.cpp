//Lý thuyết 02.G - Một số lệnh mở rộng về khai báo biến [Optional]
// ----------------------------------------------------------------------------------------------------------------------------------
/*
- Khai báo nhiều biến cùng trong 1 lệnh
- Các kí hiệu khởi tạo
- Từ khoá auto [C++ only]
VD:   
#include <iostream>
int main()
{
	auto x = 10;
	auto y = 23.9;
	auto z = "Luong Van Vo";

	std::cout << typeid(x).name() << std::endl << typeid(y).name() <<  std::endl << typeid(z).name() << std::endl;
	return 0;
}
- Từ khoá const
*/