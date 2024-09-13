#include <iostream>
#include <string>
using namespace std;

class Woman
{
public:
    string fullName;
    int age;

    static int numberOfWoman;

    // Hàm có static thì không phụ thuộc vào object nào cả, có thể gọi trực tiếp nó từ class ra, có thể gọi như hàm bình thường
    // Hàm static không thể gọi được đến các biến thành viên, chỉ có gọi được các biến cũng có kiểu static
    static void what()
    {
        cout << "Woman is to be loved.\n";
        cout << "There are " << numberOfWoman << " woman in program now" << endl;
    }
    Woman(string fn, int a)
    {
        fullName = fn;
        age = a;
        numberOfWoman++;
    }

    void introduce()
    {
        cout << "My name is " << fullName << "." << endl;
        cout << "Now I am " << age << " years old." << endl;
    }
private:
    double weight;
};

// Biến static chỉ được khai báo như một biến global
// Về cơ bản biến global giống như một biến global (biến toàn cục)
int Woman::numberOfWoman = 0; // cách khai biến static trong Class

int main()
{
    Woman *Hariwon = new Woman("Hariwon", 35);
    Woman *Ngoctrinh = new Woman("NgocTrinh", 30);

    // Hariwon->introduce();
    cout << Woman::numberOfWoman << endl;
    Woman::what(); // Gọi trực tiếp hàm what từ Class Woman
    return 0;
}