#include <iostream>
using namespace std;

struct Human {
    string name;
    int age;
    double weight;
    int sizeBody[3];
};

struct School {
    string nameSchool;
    string Class;
};
int main()
{
    Human VoLuong;
    VoLuong.name = "Luong Van Vo";
    VoLuong.age = 18;
    VoLuong.weight = 170.5;
    VoLuong.sizeBody[0] = 60;
    VoLuong.sizeBody[1] = 90;
    VoLuong.sizeBody[2] = 60;

    School DUT;
    DUT.nameSchool = "Truong Dai Hoc Bach Khoa";
    DUT.Class = "23T_DT1";

    cout << VoLuong.name + " " + DUT.nameSchool << endl;



    return 0;
}