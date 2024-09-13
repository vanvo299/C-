// Construction : Hàm khởi tạo

#include <iostream>
#include <string>
using namespace std;

class Woman 
{
public:
    string fullName;
    int age;


    // Hàm khởi tạo. Được gọi ngay lúc khởi tạo
    Woman()
    {
        fullName = "Unknown";
        age = 0;
    }
    
    Woman(string FN, int a)
    {
        // khởi tạo các giá trị ban đầu
        fullName = FN;
        age = a;
    }
    void introduce()
    {
        cout << "My name is: " << fullName << endl;
        cout << "Now I am " << age << " years old" << endl;
    }
private:
    double weight;
};
int main()
{
    Woman *Hariwon = new Woman("Hariwon", 35);

    Hariwon->introduce();

    cout << endl;

    Woman *somebody = new Woman;
    somebody->introduce();

    return 0;
}