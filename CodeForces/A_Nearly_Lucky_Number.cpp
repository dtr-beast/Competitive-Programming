// https://codeforces.com/problemset/problem/110/A
// Nearly Lucky Number
// A2OJ
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"
 
using namespace std;
 
signed main()
{
    fastio
 
    string s1;
    cin >> s1;
    int count = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '4' || s1[i] == '7')
        {
            count++;
        }
    }
    string s2 = to_string(count);
    for (int i = 0; i < s2.size(); i++)
    {
       if (s2[i] != '4' && s2[i] != '7')
       {
           cout << "NO";
           return 0;
       }
    }
 
    cout << "YES";
 
    return 0;
}