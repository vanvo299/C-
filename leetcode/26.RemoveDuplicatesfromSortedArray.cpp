// 26. Remove Duplicates from Sorted Array
/*
Cho một mảng số nguyên được sắp xếp theo thứ tự không giảm, hãy loại bỏ các phần tử trùng lặp tại chỗ sao cho mỗi phần tử
duy nhất chỉ xuất hiện một lần. Thứ tự tương đối của các phần tử phải được giữ nguyên. Sau đó trả về số phần tử duy nhất theo số
*/
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int>& nums)
{
    int new_size = 1; // Kích thước của mảng sau khi loại bỏ các phần tử trùng nhau
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[new_size++] = nums[i];
        }
    }
    return new_size;
}
int main()
{
    vector<int> nums = {0,0,0,1,1,2,2,2,3,3,4};
    int result = removeDuplicate(nums);
    cout << "So luong phan tu con lai sau khi loai bo cac phan tu trung nhau la: " << result << endl;
    cout << "Mang sau khi loai bo di cac phan tu trung nhau: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}