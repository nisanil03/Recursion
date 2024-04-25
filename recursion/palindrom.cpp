#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string &s, int start, int end)
{
    // base case
    if (start >= end)
    {
        return true;
    }
    // lets solved one case
    if (s[start] != s[end])
    {
        return false;
    }
    //RE
    return ispalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    cout << ispalindrom(s, 0, s.size() - 1) << endl;
    return 0;
}