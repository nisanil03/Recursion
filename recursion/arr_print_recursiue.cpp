#include <bits/stdc++.h>
using namespace std;

// alternative method

void print(int arr[], int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // first case solved kiya baki recursion dhak lega
    cout << arr[0] << " ";
    print(arr +1 , n-1);
}

/*void print(int arr[], int n, int i)
{
    // base case
    if (i >= n)
    {
        return;
    }
    // first case solved kiya baki recursion dhak lega
    cout << arr[i] << " ";
    print(arr , n, i+1);
}*/

int main()
{

    int arr[5] = {12, 23, 34, 45, 56};
    int n = 5;
    int i = 0;
    print(arr, n);

    return 0;
}
