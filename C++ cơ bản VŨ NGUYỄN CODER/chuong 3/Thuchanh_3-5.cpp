/* THỰC HÀNH 3.5:
Nhập 2 số thực xA, yA tượng trưng cho toạ độ của 1 điểm A trong hệ toạ độ 2 chiều Oxy. Tương tự như vậy, nhập điểm B(xB, yB) và C(xC, yC). Biết điểm gốc toạ độ là O(0, 0).
Lập trình để tính các giá trị sau:
1 - Độ dài đoạn thẳng AB
2 - Độ dài đoạn thẳng OI, trong đó I là trung điểm của đoạn thẳng AB
3 - Độ dài đoạn thẳng OG, trong đó G là trọng tâm tam giác ABC
4 - Diện tích tam giác ABC
5 - Diện tích của đường tròn nội tiếp tam giác ABC
6 [*] - Góc giữa 2 đoạn thẳng OA, OB tính theo độ
(Gợi ý: nếu cos của góc alpha là x, thì acos(x) = alpha, trong đó alpha được tính bằng radian. Trong thư viện cmath đã có sẵn hàm acos)
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int xA, yA, xB, yB, xC, yC;
    const int xO = 0, yO = 0;
    cout << "Nhap diem A: "; cin >> xA >> yA;
    cout << "Nhap diem B: "; cin >> xB >> yB;
    cout << "Nhap diem C: "; cin >> xC >> yC;

    // 1- Tính độ dài đoạn thẳng AB
     float AB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
     
     // 2 - Độ dài đoạn thẳng OI, trong đó I là trung điểm của đoạn thẳng AB
     float xI, yI;
     xI = (xA + xB) / 2.0;
     yI = (yA + yB) / 2.0;

     float OI = sqrt(pow(xI, 2) + pow(yI, 2));

     // 3 - Độ dài đoạn thẳng OG, trong đó G là trọng tâm tam giác ABC
     float xG, yG; // tọa độ của điểm G
     xG = (xA + xB + xC) / 3.0;
     yG = (yA + yB + yC) / 3.0;

     float OG = sqrt(pow(xG, 2) + pow(yG, 2));
     
     // 4 - Tính diện tích tam giác ABC
     float BC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));
     float AC = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));

     float nua_chu_vi_ABC = (AB + BC + AC) / 2.0;
     float S_ABC = sqrt(nua_chu_vi_ABC*(nua_chu_vi_ABC - AB)*(nua_chu_vi_ABC - BC)*(nua_chu_vi_ABC - AC));
     
     // 5 - Diện tích của đường tròn nội tiếp tam giác ABC
     // S_ABC = p*r (p là nửa chu vi tam giác ABC) => r = S_ABC / p

     float r; // bán kính đường tròn nội tiếp tam giác ABC
     r =  S_ABC / nua_chu_vi_ABC;
     float S_tron_NTTG =  M_PI * pow(r, 2);

     // 6 [*] - Góc giữa 2 đoạn thẳng OA, OB tính theo độ
    // (Gợi ý: nếu cos của góc alpha là x, thì acos(x) = alpha, trong đó alpha được tính bằng radian. Trong thư viện cmath đã có sẵn hàm acos)
     float goc_OA_OB = acos((xA*xB + yA*yB) / sqrt((pow(xA, 2) + pow(yA, 2)) * (pow(xB, 2) + pow(yB, 2)) ));
     goc_OA_OB = (goc_OA_OB * 180) / M_PI;

     cout << "Ket qua 1: " << AB << endl;
     cout << "Ket qua 2: " << OI << endl;
     cout << "Ket qua 3: " << OG << endl;
     cout << "Ket qua 4: " << S_ABC << endl;
     cout << "Ket qua 5: " << S_tron_NTTG << endl;
     cout << "Ket qua 6: " << goc_OA_OB << endl;
    return 0;
}