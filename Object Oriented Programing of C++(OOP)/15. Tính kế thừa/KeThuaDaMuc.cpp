// Tính kế thừa - Inheritance
#include <iostream>
#include <string>
using namespace std;

class Vehicle {

public:  
    // Note: Hàm khởi tạo không áp dụng được overriding
    // Khi ta định nghĩa thêm tham số cho hàm khởi tạo thì hàm khởi tạo mặc định sẽ tự động biến mất
    
    // Vehicle()
    // {
    //     cout << "Create a vehicle. \n";
    // }

    
    Vehicle(string name)
    {
        modelName = name;
        cout << "Create a vehicle with name " << modelName << ". \n";
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

private:
    string modelName;
};

// class Taxi kế thừa class Vehicle
class Taxi : public Vehicle {
public:
    // chỉ định Taxi tìm đến hàm khởi tạo ta cần nó tìm đến.
    Taxi(string name) : Vehicle(name) 
    {
        cout << "Create a taxi. \n";
    }
    void start()
    {
        cout << "Started. Ready to run\n";
    }
};

// class Truck ke thua class Vehicle
class Truck : public Vehicle {
};

int main()
{
    Taxi *taxi = new Taxi("Kia Morning");
    // Taxi *taxi2 = new Taxi("Vinfast Vf9");
    
    return 0;
}