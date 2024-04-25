#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    // 1-> case solve karna hai
    swap(s[start], s[end]);

    // recursion call-> baaki recursion dhak lega
    reverse(s, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;

    reverse(s, 0, s.size() - 1);

    cout << s << endl;

    return 0;
}