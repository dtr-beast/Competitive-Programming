// https://www.codechef.com/problems/SEGM01
// Linear Search
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl \
    << "\n";

using namespace std;

void checkStr(string &s, int i)
{
    bool again = false, done = false, ans = false;
    // Done: '111' string found
    // Ans: Output already given
    // Again: Again found '1'
    for (; i < s.length(); i++)
    {
        if (s[i] == '1' && done == false)       // If String not found yet
        {
            again = true;                       // To make sure the string is not found again 
        }
        else if (s[i] == '0' && done == false)  // If the String is not found yet and a '0' is encountered
        {
            done = true;                        // String found
        }
        else if (s[i] == '1' && again && done)  // If '1' is found and String has already been found and its found again
        {
            cout << "NO" endl
            ans = true;
            break;
        }
    }
    if (!ans)
    {
        cout << "YES" endl
    }
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string s1;
        cin >> s1;
        if ((a = s1.find('1')) != string::npos) // No position in the String, i.e Not Found
        {
            checkStr(s1, a);
        }
        else
        {
            cout << "NO" endl
        }
    }
    return 0;
}