// Lý thuyết 04.A - Cấu trúc If

/*
- Control statement: Mệnh đề điều khiển
- Operator: Toán tử
- Conditional Operator: Toán tử điều kiện

*/

// Lý thuyết 04.E [optional] - Toán tử điều kiện (conditional operator)
// Hay còn gọi là toán tử ba ngôi
/*
- Syntax:  <tên biến> = <điều kiện> ? Biểu_thức_đúng : Biểu_thức_sai;
VD: 
   	int age;
	cout << "Nhap tuoi: ";
	cin >> age;

	std::string s = ((age >= 18) ?  "Tren 18 tuoi\n" : "duoi 18 tuoi\n");
	cout << s;

*/

// Lý thuyết 04.F [optional] - Cấu trúc Switch-Case

/*
- Khi cấu trúc rẽ nhánh dựa trên 1 biến chạy trên các giá trị nhất định, có thể áp dụng cấu trúc Switch case

- SYNTAX:           switch(biểu thức) {
                    case x:
                         // code block
                     break;
                    case y:
                     // code block
                     break;
                      default:
                       // code block
                    } 


VD:  	char score;
	cout << "Nhap diem trung binh: ";
	cin >> score;

	switch (score) {
	case 'A':
		cout << "Gioi\n";
		break;
	case 'B':
		cout << "Kha\n";
		break;
	case 'C':
		cout << "Trung binh\n";
		break;
	case 'D':
		cout << "Yeu\n";
		break;
	default:
		cout << "Diem khong hop le\n";
	}


*/