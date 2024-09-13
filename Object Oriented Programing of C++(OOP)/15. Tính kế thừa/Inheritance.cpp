// Tính kế thừa - Inheritance
// Các khái niệm
/*
- Overriding là một cơ chế cho phép các class con (dẫn xuất) có thể định nghĩa lại hoặc bổ sung phương thức / function 
ở class cha
*/
#include <iostream>
#include <string>
using namespace std;

class Vehicle {

public:     
    // getter, setter
    string getModelName()
    {
        return modelName;
    }
    void setModelName(string name)
    {
        modelName = name;
    }

    int getVersion()
    {
        return version;
    }

    void setVersion(int v)
    {
        version = v;
    }

    void run()
    {
        cout << "A vehicle is running...!" << endl;
    }
private:
    string modelName;
    int version; // phiên bản của phương tiện
};

// class Taxi kế thừa class Vehicle
class Taxi : public Vehicle {
public:
    // overriding, viet lai ham run duoc ke thua tu lop cha la Vehicle
    void run()
    {
        Vehicle::run(); // gọi lại hàm của lớp cha
        cout << "It's a taxi";
    }

    // cơ chế overloading 
    void run(int km)
    {
        kmCounter = km;
    }
    int calulateFee()
    {
        return kmCounter * 9000;
    }
private:
    int kmCounter;
};

// class Truck ke thua class Vehicle
class Truck : public Vehicle {
public:

private:
};

int main()
{
    // Vehicle *vehicle = new Vehicle;
    Taxi *taxi = new Taxi;
    taxi->run(5);
    cout << "Fee: " << taxi->calulateFee() << " VND" << endl;;    
    return 0;
}