// 27. Remove Element
/*
Cho một mảng số nguyên nums và một số nguyên val, hãy loại bỏ tất cả các lần xuất hiện của val trong nums tại vị trí của nó. 
Thứ tự của các phần tử có thể thay đổi. Sau đó trả về số phần tử của mảng mà không bằng val
*/
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val)
{
    int new_size = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[new_size++] = nums[i];
        }
    }
    return new_size;
}
int main()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int result = removeElement(nums, val);
    cout << "So luong phan tu trong mang sau khi loai cac phan tu co gia tri bang voi " << val << " la: " << result << endl;
    cout << "Mang sau khi xoa cac phan tu co gia tri bang " << val << " la: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}