// Destructor : Hàm hủy

#include <iostream>
#include <string>
using namespace std;

class Message{};

class Woman 
{
public:
    string fullName;
    int age;
    Message *msg;

    // Hàm khởi tạo. Được gọi ngay lúc khởi tạo
    Woman()
    {
        fullName = "Unknown";
        age = 0;
    }
    
    Woman(string FN, int a)
    {
        // khởi tạo các giá trị ban đầu
        cout << "Created a new woman" << endl;
        fullName = FN;
        age = a;
    }

    // Hàm hủy, chỉ có tác dụng đối với cấp phát động
    // đối với cấp phát tĩnh thì tự động hủy khi ra thoát ra khỏi scope
    ~Woman()
    {
        cout << "Deleted a new woman" << endl;
        delete msg;
        /*
        - Trong một Object có một thuộc tính mà nó lại là con trỏ đang trỏ đến một vùng nhớ động
        nào khác, thì phải delete nó trong hàm delete của Object ngoài cùng.  
        */
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

    // Hariwon->introduce();

    // Hủy đi đối tượng, giải phóng bộ nhớ
    // delete dùng để gọi hàm hủy
    delete Hariwon;
    return 0;
}