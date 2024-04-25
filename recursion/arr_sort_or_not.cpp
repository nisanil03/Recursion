#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &arr, int& n, int i)
{
    // base case
    if (i == n - 1)
    {
        return true;
    }
    // 1 case solve karna h

    if (arr[i + 1] < arr[i])
        return false;

    // baaaki recursion dhak lega
    return checkSorted(arr, n, i + 1);
}

int main()
{

    vector<int> arr{10, 20, 30, 40, 50};
    int n = arr.size();
    int i = 0;
    bool isSorted = checkSorted(arr, n, i);

    if (isSorted)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}