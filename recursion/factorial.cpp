#include <bits/stdc++.h>
using namespace std;

int factorial(int n)    
{
    cout << "function cell is called for n :" << n << endl;
    // base case
    if (n == 1)
    {
        return 1;
    }
    int ans = n * factorial(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "Answer is : " << ans << endl;
    return 0;
}