// 66. Plus One
// Cho một số nguyên lớn được biểu diễn dưới dạng mảng số nguyên, trong đó
// mỗi chữ số [i] là chữ số thứ i của số nguyên. Số nguyên lớn không chứa số 0 đứng đầu
// Tăng số nguyên lớn lên một và trả về mảng chữ số kết quả
/*
Input: digits = [1,2,3]
Output: [1,2,4]
*/
#include <iostream>
#include <vector>
  std::vector<int> plusOne(std::vector<int>& digits) 
{
    int n = digits.size();
    std::vector<int> temp;
    digits[n - 1] += 1;
   for (int i = 0; i < n; i++) {
       if (digits[n - 1] > 9) {
       digits[n - 1] %= 10;
       } 
   } return digits;
}

int main()
{
    std::vector<int> digits;
    std::cout << "Nhap mang: ";
    int number;
    while(true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        digits.push_back(number);
    }
     std::vector<int> result = plusOne(digits);

     for (int i : result) {
        std::cout << i << " ";
     }
    return 0;
}