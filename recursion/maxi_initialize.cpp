#include <bits/stdc++.h>
using namespace std;
/*void findMax(int arr[], int n,int i, int& maxi)
{
    // base case
    if (i >= n)
    {
        // array agar khtam hogya, poora traverse hogya
        // toh wapas aajao
        return;
    }
    // 1 case solve karna h
    // current element ko cjheck karo for max
    if (arr[i] > maxi)
    {
        maxi = arr[i]
    }
    // baaki recursion sambhal lega
    findMax(arr, n, i + 1, maxi);
}*/

void findMin(int arr[], int n , int i, int& mini)
{
    // base case

    if (i >= n)
    {
        return;
    }

    // 1 case solve karna hai padega
    mini = min(mini, arr[i]);

    // baaki recursion dhak lega
    findMin(arr, n, i + 1, mini);
}

int main()
{
    int arr[] = {10, 30, 21, 44, 32, 17, 19, 66};
    int n = 8;

    //int maxi = INT_MIN;
    int mini = INT_MAX;

    int i = 0;

    // findMax(arr, n, i, maxi);

    findMin(arr, n, i, mini);
    
    // cout << "Maximum number is maxi" << maxi << endl;

    cout << "Minimum number is mini : " << mini << endl;
}