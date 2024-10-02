/*
[LEETCODE]. 5. Longest Palindromic Substring

Topic: Given a string s, return the longest palindromic substring in s

I used to Dynamic Programing (Quy hoach dong)
*/
#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    // Vị trí bắt đầu và kết thúc của xâu con đối xứng dài nhất
    int start = 0, maxLen = 1;
    int n = s.size();
    if (n == 0) return "";
    if (n == 1) return s;

    int F[505][505];
    memset(F, false, sizeof(F));
    
    for (int i = 0; i < n; i++) {
        F[i][i] = true;
        // Tất cả các xâu có độ dài 1 đều là xâu đối xứng 
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (len == 2) {
                F[i][j] = (s[i] == s[j]);
                // Khi xâu có độ dài 2 thì chỉ cần xét 2 phần tử trên đó
            } else {
                F[i][j] = ((s[i] == s[j]) && (F[i + 1][j - 1])); 
            }
            if (F[i][j]) {
                start = i;
                maxLen = len;
            }
        }
    }
    return s.substr(start, maxLen);
}   
int main()
{
    string s;
    cout << "Enter string s: "; 
    cin >> s;
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}