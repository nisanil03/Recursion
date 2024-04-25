#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key)
{

    // base case
    // case 1-> key not found
    if (s > e) // invalide index
        return -1;
    int mid = s + (e - s) / 2;

    // case 2-> key found
    if (arr[mid] == key)
        return mid;

    // using ternariry opertory
    // return (arr[mid] < key) ? binarySearch(arr, mid + 1, e, key) : binarySearch(arr, s, mid - 1, key);

    // 1-case solve karna hai
    // arr[mid] < key -> right me search
    if (arr[mid] < key)
    {
        int ans = binarySearch(arr, mid + 1, e, key);
        return ans;
    }

    else
    {
        // baaki recursion dhak lega
        //  arr[mid] > key -> left  me search
        int ans = binarySearch(arr, s, mid - 1, key);
        return ans;
    }
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 70, 90, 99};
    int target = 99;
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int ans = binarySearch(arr, s, e, target);

    cout << "Answer is : " << ans << endl;
    return 0;
}