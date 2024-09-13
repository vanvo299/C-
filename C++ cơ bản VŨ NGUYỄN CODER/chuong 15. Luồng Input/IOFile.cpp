// File Stream [Only C++]

#include <iostream>
#include <string>
#include <fstream> // thư viện cần khai báo

using namespace std;

int main()
{
	int x, y;

    ifstream input("input.txt"); // trong dau " " la duong dan toi file
    ofstream output("output.txt");
    string line;
    
    while(getline(input, line)) {
        // doc tat cac dong den khi getline return ve NULL thi dung
        output << line << endl; 
    }

    // output << "Vu Nguyen Coder"; 
	return 0;
}