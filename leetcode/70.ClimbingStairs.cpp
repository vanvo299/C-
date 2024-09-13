// 70. Climbing Stairs
// Bạn đang leo cầu thang. Phải mất n bước để đạt đến đỉnh.
// Mỗi lần bạn có thể leo 1 hoặc 2 bậc. Bạn có thể leo lên đỉnh bằng bao nhiêu cách riêng biệt ?
#include <iostream>
#include <cmath>
using namespace std;
int ClimbStairs(int n)
{
    return (1/sqrt(5)) * pow((1 + sqrt(5)) / 2, n + 1) - (1/sqrt(5)) * pow((1 - sqrt(5)) / 2, n + 1);
}
int main()
{
    int soBuocCanLeo;
    cout << "Nhap so bac cau thang can leo len: ";
    cin >> soBuocCanLeo;
    cout << "Tong so cach de co the leo len " << soBuocCanLeo << " la: " << ClimbStairs(soBuocCanLeo) << endl;

    return 0;
}