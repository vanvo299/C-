// Tính đóng gói
#include <iostream>
#include <string>
using namespace std;

struct BodySize
{
    float weight;
    int size3ring[3];
};

class Woman
{
private:
    BodySize bodySize;
    string fullName;
    int age;
public:
    Woman(string fn, int a)
    {
        fullName = fn;
        age = a;
        bodySize.weight = 50;
        bodySize.size3ring[0] = 90;
        bodySize.size3ring[1] = 60;
        bodySize.size3ring[2] = 90;
    }
    void introduce()
    {
        cout << "My name is " << fullName << endl;
        cout << "I'm " << age << " years ago" << endl; 
    }

    // Setter và getter, sửa dữ liệu tuổi
    // cập nhật age
    void setAge(int a) {
        this->age = a;
    }
    // lấy age 
    int getAge() 
    {
        return age;
    }

    void setFullName(string fn)
    {
        this->fullName = fn;
    }
    string getFullName()
    {
        return fullName;
    }
};
int main()
{
    Woman *hariwon = new Woman("Hariwon", 35);
    hariwon->setAge(19);
    hariwon->setFullName("Vo Luong");
    hariwon->introduce();
    cout << hariwon->getAge() << endl;
    cout << hariwon->getFullName() << endl;

    return 0;
}