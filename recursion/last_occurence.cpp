
// Method number 1 LEFT TO RIGHT apporach;

/*#include <bits/stdc++.h>
using namespace std;
void lastOccerences(string &s, char x, int i, int &ans)
{
    // base case
    if (i >= s.size())
    {
        return;
    }

    // ex case solve karna hai
    if (s[i] == x)
    {
        ans = i;
    }
    //recursion relation
    lastOccerences(s, x, i + 1, ans);


}

int main()
{
    string s;
    cout<<"Enter your string"<<endl;
    cin >> s;
    char x;
    cin >> x;
    int ans = -1;
     int i = 0;

     lastOccerence(s, x, i, ans);


    cout << ans << endl;
    return 0;
}*/

//-----------------------------------**************************************************----------------------------------------------------

// Methode number 2RIGHT TO LEFT Apporch

#include <bits/stdc++.h>
using namespace std;
void lastOccerences(string &s, char x, int i, int &ans)
{
    // base case
    if (i < 0)
    {
        return;
    }

    // ex case solve karna hai
    if (s[i] == x)
    {
        ans = i;
        return;
    }
    // recursion relation
    lastOccerences(s, x, i - 1, ans);
}
int main()
{
    string s;
    cin >> s;
    char x;
    cin >> x;
    int ans = -1;
    lastOccerences(s, x, s.size() - 1, ans); 

    return 0;
}