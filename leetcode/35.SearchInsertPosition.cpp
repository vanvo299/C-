// 35. Search Insert Position
// Cho một mảng được sắp xếp, và 1 số mục tiêu, trả về vị trí nếu tìm được số mục tiêu đó, 
// còn không thì chèn số mục tiêu đó vào mảng và đảm bảo tính sắp xếp của mảng rồi trả về vị trí
#include <iostream>
#include <vector>
#include <algorithm>
int searchInsert(std::vector<int>& num, int target)
{
    int left = 0, right = num.size() - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (num[mid] == target) {
            return mid;
        } else if(num[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }  
    return left;
}
int main()
{
    std::vector<int> num;
    std::cout << "Nhap mang: ";
    int number;
    while(true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        num.push_back(number);
    }
    int target;
    std::cout << "Nhap so muc tieu: ";
    std::cin >> target;
    std::cout << "Vi tri cua so muc tieu trong mang la: " <<  searchInsert(num, target);
    return 0;
}