#include <bits/stdc++.h>
using namespace std;

void checkKey(string str, int i, int n, char& key, vector<int>& ans)
{
    // base case ;
    if (i >= n)
    {
        // key not found
        return ;
    }
    // 1 case solve karna hai
    if (str[i] == key)
    {
        //cout<<"Found at :"<<i<<endl;
        // store in vector
        ans.push_back(i);
        
    }

    // baaki recursion dhak lega
    return checkKey(str, i + 1, n, key,ans);
    //return ans;
}

int main()
{
    string str = "nishajasiwal";
    int n = str.length();

    char key = 'a';
    int i = 0;
     vector<int> ans;
    checkKey(str, i, n, key,ans);

    //cout << "Answer is : " << ans << endl;
    cout<<"printing ans"<<endl;
    for(auto val: ans){
        cout<<val<<" ";
    }
     cout<<endl;
    return 0;
}