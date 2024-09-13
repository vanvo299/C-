// 80. Merge Sorted Array
/*
Cho hai mảng số nguyên nums1 và nums2 được sắp xếp theo thứ tư không giảm, và hai số nguyên m và n,
biểu thị số phần tử tương ứng trong nums1 và nums2. 
Hợp nhất nums1 và nums2 thành một mảng duy nhất được sắp xếp theo thứ tự không giảm
*/
#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int> result(m + n);
    int i = 0, j = 0, k = 0;
    while(i < m && j < n) {
        if (nums1[i] < nums2[j]) 
            result[k++] = nums1[i++];
            else 
            result[k++] = nums2[j++];
    }
    while(i < m) {
        result[k++] = nums1[i++];
    }
    while(j < n) {
        result[k++] = nums2[j++];
    }
    cout << "Mang sau khi tron hai mang lai voi nhau la: ";
    for (int i = 0; i < k; i++) {
        nums1[i] = result[i];
        cout << nums1[i] << " ";
    }
}

void Nhap(vector<int>& nums1, int *m, vector<int>& nums2, int *n)
{
    cout << "Nhap so luong phan tu mang 1: ";
    cin >> *m;
    cout << "Nhap mang thu 1: ";
    for (int i = 0; i < *m; i++) {
        cin >> nums1[i];
    }
    cout << "Nhap so luong phan tu mang 2: ";
    cin >> *n;
    cout << "Nhap mang thu 2: ";
    for (int i = 0; i < *n; i++) {
        cin >> nums2[i];
    }
}
int main()
{
     int m, n;
    vector<int> nums2(m);
    vector<int> nums1(n);
    Nhap(nums1, &m, nums2, &n);
    merge(nums1, m, nums2, n);
    return 0;
}