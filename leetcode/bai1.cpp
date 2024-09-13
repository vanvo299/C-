//Bài 1. Two Sum
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};
int main() {
    int target, n;
    std::cout << "Nhap vao so muc tieu: ";
    std::cin >> target;
    std::cout << "Nhap so luong phan tu co trong vector: ";
    std::cin >> n;
    std::vector<int> myVector;
    //Nhap ki tu vao trong vector
    std::cout << "nhap phan tu vao cho vector: ";
    for (int i = 0; i < n; i++) {
        int value; // biến value dùng để lưu số trong vector khi nhập phần tử cho vector
        std::cin >> value;
        myVector.push_back(value);
        
    }
    Solution solution;
    std::vector<int> result = solution.twoSum(myVector, target);

    if (result.empty()) { // empty() là hàm để kiểm tra xem vector có trống chỗ hay không
        std::cout << "Khong co cap so nao co tong bang " << target << std::endl;
    }
    else {
        std::cout << "Vi tri cac phan tu co tong bang " << target << " la: " << result[0] << " va " << result[1] << std::endl;
    }
	return 0;
}