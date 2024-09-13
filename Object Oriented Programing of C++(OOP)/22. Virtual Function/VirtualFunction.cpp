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
        // cout << "Created a Vehicle !\n";
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

    virtual void run()
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
        // cout << "Created a Car !\n";
        // ownerName = "NONE";
    }
    void run() override
    // override có tác dụng để đánh dấu các hàm overriding (định nghĩa lại) => có tác dụng cho việc đọc code
    // có hay không có cũng được
    {
        // cout << "A car of " << ownerName << " is running\n";
        cout << "A car is running... \n";
    }
private:
    string ownerName;
};

class Truck : public Vehicle {
public:
    Truck() 
    {
        // cout << "Created a Truck !\n";
    }
    void run() override
    {
        cout << "A truck is running !\n";
    }
};

class Motobike : public Vehicle {
public:
    Motobike()
    {
        // cout << "Created a Motobike !\n";
    }
    void run() override
    {
        cout << "A motobike is running !\n";
    }

};
int main()
{
    Vehicle *car = new Car(); // up casting
    Vehicle *truck = new Truck();
    Vehicle *motobike = new Motobike();


    // Đưa vào mảng (vì cùng kiểu dữ liệu)
    Vehicle *vehicleList[3];
    vehicleList[0] = car;
    vehicleList[1] = truck;
    vehicleList[2] = motobike;

    for (int i = 0; i < 3; i++) {
        vehicleList[i]->run();
    }

    // Không dugnf virtual function:
    /*
        A vehicle is running...!
        A vehicle is running...!
        A vehicle is running...!
    */
   // Dùng virtual function
   /*
        A car is running... 
        A truck is running !
        A motobike is running !
   */
    return 0;
}