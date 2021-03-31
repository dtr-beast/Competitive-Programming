// https://codeforces.com/problemset/problem/61/A
// Ultra-Fast Mathematician
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"
 
using namespace std;
 
signed main()
{
	fastio
 
    string s1, s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
	return 0;
}