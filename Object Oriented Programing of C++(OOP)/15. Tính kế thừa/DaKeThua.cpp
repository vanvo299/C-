// Tính kế thừa - Inheritance
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


protected:
// những phần tử trong protected cũng không được gọi trực tiếp bên ngoài như private
// nhưng các lớp dẫn xuất thì có thể gọi trực tiếp đến

    void run()
    {
        cout << "A vehicle is running...!" << endl;
    }

private:
    string modelName;
};

// class Taxi kế thừa class Vehicle
class Taxi : public Vehicle {
public:
    void start()
    {
        cout << "Started. Ready to run\n";
        // hàm run() thuộc protected nên class Taxi có thể gọi trực tiếp đến nó
        run();
    }
};

// class Truck ke thua class Vehicle
class Truck : public Vehicle {
};

int main()
{
    // Vehicle *vehicle = new Vehicle;
    Taxi *taxi = new Taxi;
    taxi->start();
    
    return 0;
}