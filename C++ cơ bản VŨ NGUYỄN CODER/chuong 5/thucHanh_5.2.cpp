//  THỰC HÀNH 5.2
/*
Nhập n từ bàn phím (n>1) và in kết quả của các biểu thức sau:
1 - P(n) = 1 + 2 + 3 + ... + n
2 - Q(n) = 1 * 2 * 3 * ... * n
3 - R(n) = 1 + 3 + 5 + ... + n (Tổng liên tiếp các số lẻ)
4 - S(n) = 1^3 + 2^3 + … + n^3
5 - T(n) = 1/1^1 + 2/2^2 + … + n/n^n
6 - U(n) = 12 + 23 + 3*4 + ... + n * (n+1)
7 - V(n) = 1 + 11 + 111 + ... + (11...1)
8 - X(n) = 1 + (1+2) + (1+2+3) + .... + (1+2+3+...+n)
Lưu ý: nếu n nhập vào < 1, thì trả về kết quả 0.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Nhap n: ";
    int n; 
    cin >> n;
    if (n < 1) {
        cout << "Vui long nhap lai";
        return 0;
    }
    // 1 - P(n) = 1 + 2 + 3 + ... + n
    int P = 0;
    for (int i = 1; i <= n; i++) {
        P += i;
    }
    cout << "P(n) = " << P;
    //2 - Q(n) = 1 * 2 * 3 * ... * n
    int Q = 1;
    for (int i = 1; i <= n; i++) {
        Q *= i;
    }
    cout << "\nQ(n) = " << Q;
    // 3 - R(n) = 1 + 3 + 5 + ... + n (Tổng liên tiếp các số lẻ)
    int R = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            R += i;
        }
    }
        cout << "\nR(n) = " << R;
    // 4 - S(n) = 1^3 + 2^3 + … + n^3
    int S = 1;
    for (int i = 1; i <= n;i++) {
        S += pow(i,3);
    }
    cout << "\nS(n) = " << S;
    // 5 - T(n) = 1/1^1 + 2/2^2 + … + n/n^n
    double T = 0;
    for (int i = 1; i <= n; i++) {
        T += i / pow(i, i);
    }
    cout << "\nT(n) = " << T;
    // 6 - U(n) = 1*2 + 2*3 + 3*4 + ... + n * (n+1)
    long U = 0;
    for (int i = 1; i <= n; i++) {
        U += (i * (i + 1));
    }
    cout << "\nU(n) = " << U;
    // 7 - V(n) = 1 + 11 + 111 + ... + (11...1)
    long V = 0;
    for (int i = 1; i <= n; i++) {
        V += (pow(10, i) - 1) / 9.0;
    }
    cout << "\nV(n) = " << V;
    // 8 - X(n) = 1 + (1+2) + (1+2+3) + .... + (1+2+3+...+n)
    long X = 0;
    for (int i = 1; i <= n; i++) {
        X += (i * (i + 1)) / 2;
    }
    cout << "\nX(n) = " << X;
    return 0;
}