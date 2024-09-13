// Tính trừu tượng - Abstraction

#include <iostream>
#include <string>
using namespace std;

class Woman {
private: 
    string fullName;
    int age;
    float weight;
    float height;


public: 
        Woman(string fn, int a, float w, float h)
    {
        fullName = fn;
        age = a;
        weight = w;
        height = h;
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

    void setWeight(float w) {
        this->weight = w;
    }

    // lay weight
    float getWeight()
    {
        return weight;
    }

    void setHeight(float h)
    {
        this->height = h;
    }
    // lay height
    float getHeight()
    {
        return height;
    }

};

class HealthChecker {
public:
    void check(Woman *woman) 
    {
        weight = woman->getWeight();
        height = woman->getHeight();
        // ... calculate ....
        bloodPressure = 130; // getDevice() : chi so nay se duoc lay tu thiet bi nao do
        heartBeat = 80; // getDevice() : tuong tu bloodPressure
    } 

    string getResult()
    {
        float BMI = weight / (height * height);
        if (BMI > 18.5 && BMI <= 24.9 
        && bloodPressure >= 120 && bloodPressure < 140 
        && heartBeat >= 60 && heartBeat < 100) {
            return "Normal";
        } 
        return "Abnormal";
    }

private: 
    float weight;
    float height;
    int bloodPressure; // huyet ap
    int heartBeat; // nhip tim
};

int main()
{
    Woman *hariwon = new Woman("HariWon", 35, 60, 1.65);

    HealthChecker *checker = new HealthChecker;

    checker->check(hariwon);
    string result = checker->getResult();
    cout << result << endl;
    return 0;
}