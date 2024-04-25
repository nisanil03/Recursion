#include <bits/stdc++.h>
using namespace std;

void printCounting(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    cout << n << endl;

    // recursive relation
    printCounting(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number of n " << endl;
    cin >> n;

    printCounting(n);
    cout << endl;

    return 0;
}
