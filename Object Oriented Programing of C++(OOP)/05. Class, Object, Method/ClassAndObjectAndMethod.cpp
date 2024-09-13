// 05. Class và Object
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Message 
{
public:
    string content;
    string sender;
};
struct BodySize{
    vector<int> Size3ring;
    double weight;
};

class Woman 
{
public:
    string name;
    int age;
    BodySize bodySize;

    void make_up()
    {
        cout << "Toi da make up xong \n";
    }

    void introduce(string language, bool isCheck = true)
    // truyền tham số mặc định, lúc gọi hàm (function call) sẽ không cần truyền vào tham số nữa
    // nhưng hàm với 2 tham số trở lên thì tham số mặc định phải đặt ở phía sau cùng của các tham số của hàm (như trên)
    {
        cout << "Thong Tin Cua " << name << endl;
        cout << "FullName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << bodySize.weight << endl;
        cout << "Salary: " << getSalary() << endl << endl;
        if (isCheck && language == "English") {
            cout << "I am very beautiful\n";
        } else cout << "Toi rat la dep\n";
    } 

    string introduce_1()
    {
        string s = "Toi nam nay duoc danh hieu sinh vien gioi\n";
        return s;
    }

    // Có thể trả về một class (Hiểu đơn giản là class được hiểu như là 1 kiểu dữ liệu)
    Message *chatBox(string language, bool isCheck = true) 
    {
        Message *msg = new Message;
        if (language == "English") {
           msg->content = "I love VietNam, ";
            if (isCheck) {
                msg->content += "I am Marcus RashFord\n";
            }
        }
        else {
            msg->content = "Toi yeu Viet Nam, ";
            if (isCheck) {
                msg->content += "toi la Hoang Nam\n";
            }
        }
        return msg;
    }

    // OverLoading (Phương thức nạp chồng hàm)
    // Có thể tạo một hàm có tên giống với hàm đã tạo trước đó nhưng phải khác tham số, nếu giống nhau về tham số truyền vào thì sẽ bị lỗi
    // Ví dụ như hàm chatBox trên và dưới, cùng tên như khác nhau về tham số
    Message *chatBox(int count)
    {
        Message *msg = new Message;
        for (int i = 0; i < count; i++) {
            msg->content += "Hello" + to_string(i) + "\n";
        }
        return msg;
    }
    
    // phuong thuc lay gia tri cua bien private (ham khoi tao bien)
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }

private:
    int salary;
};
int main()
{
    Woman *Krixi = new Woman;
    Krixi->name = "Krixi";
    Krixi->age = 19;
    Krixi->bodySize.weight = 53.3;
    Krixi->setSalary(2000);

    Krixi->introduce("English", true);
    Krixi->make_up();

    cout << Krixi->introduce_1() << endl;
    Message* msg = Krixi->chatBox("English", true);
    cout << msg->content;

    // Overloading sẽ dựa vào tham số được truyền vào để phân biệt các hàm
    Message *msg1 = Krixi->chatBox(5);
    cout << msg1->content;

    return 0;
}