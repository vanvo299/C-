// Casting - Các lớp các quan hệ kế thừa nhau thì có thể ép kiểu được 
/*
- Up casting: Ép kiểu từ lớp dẫn xuất về lớp cơ sở
- Down casting: Ép kiểu từ lớp cơ sở về lớp dẫn xuất
*/
#include <iostream>
#include <string>
using namespace std;

class Vehicle {

public:  
    Vehicle()
    {
        cout << "Created a Vehicle !\n";
    }
    // getter, setter
    string getModelName()
    {
        return modelName;
    }
    void setModelName(string name)
    {
        modelName = name;
    }

    void run()
    {
        cout << "A vehicle is running...!" << endl;
    }
private:
    string modelName;
};

class Car : public Vehicle {
public: 
    Car() 
    {
        cout << "Created a Car !\n";
        ownerName = "NONE";
    }
    void run()
    {
        cout << "A car of " << ownerName << " is running\n";
        // cout << "A car is running... \n";
    }
private:
    string ownerName;
};


int main()
{
    // Up casting
    // Car *car = new Car;
    // ((Vehicle*)car)->run(); // ép kiểu Car --> Vehicle (Up casting)
    // car->run();

    // Down casting
    // Vehicle *vehicle = new Vehicle;
    // ((Car*)vehicle)->run(); // Ép từ kiểu Vehicle --> Car (Down casting)
    // Lưu ý: Down casting dễ gây lỗi run time. Vì khi ép kiểu từ lớp cơ sở qua lớp dẫn xuất thì chỉ thay đổi hình thái
    // của lớp cơ sở thoi chứ ko phải khởi tạo lớp dẫn xuất, lúc này lớp dẫn xuất chưa được khởi tạo, mà lớp cơ sở truy
    // cập tới thuộc tính của lớp dẫn xuất => lỗi

    // Cách xử lí 
    Car *car = new Car;
    Vehicle *vehicle = car; // ép kiểu sang một con trỏ khác
    // Lớp dẫn xuất -> Lớp cơ sở -> Lớp dẫn xuất
    // con ép về cha rồi ép lại về con
    // Down-Casting
    ((Car*)vehicle)->run(); // ép thêm 1 lần nữa -> down casting
    return 0;
}