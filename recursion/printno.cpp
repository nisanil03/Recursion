#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // 1 case mai solve karunga

    printDigits(n / 10);

    // baaki ka recursion dhak lega

    int digit = n % 10;
    cout << digit << " ";
}

int main()
{

    int n = 647;
    printDigits(n);
    return 0;
}