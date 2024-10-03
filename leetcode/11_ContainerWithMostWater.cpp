/*
[LEETCODE]. 11. Container With Most Water

Topic: You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line 
are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Dịch: 
Bạn được cấp một chiều cao mảng số nguyên có độ dài n. Có n đường thẳng đứng được vẽ sao cho hai điểm đầu của đường thẳng thứ i 
là (i, 0) và (i, chiều cao[i]).

Tìm hai đường thẳng cùng với trục x tạo thành một thùng chứa sao cho thùng chứa nhiều nước nhất.
*/

// I used to method two pointer

#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height)
{
    int n = height.size();

    int left = 0;
    int right = n - 1;

    int res = 0;
    int area = 0;

    while(left < right) {
        // Khoảng cách của 2 đường thẳng hiện tại
        int distance = right - left;
        area = distance * min(height[left], height[right]);
        res = max(res, area);

        if (height[left] <= height[right])
            left++;
        else 
            right--;
    }
    return res;
}
int main()
{
    cout << "Enter array (Enter Ctrl + Z to exit enter): ";
    int tmp;
    vector<int> height;
    while(cin >> tmp) {
        height.push_back(tmp);
    }
    cout << "Max area: " << maxArea(height) << endl;
    return 0;
}