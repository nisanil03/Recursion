#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    // base case
    if (n == 1)
    {
        // first term
        return 0;
    }
    if (n == 2)
    {
        // second term
        return 1;
    }
    // recurive relation
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the term you wont to see :" << endl;
    cin >> n;

    int ans = fibo(n);
    cout << n << "th term is : " << ans << endl;

    return 0;
}