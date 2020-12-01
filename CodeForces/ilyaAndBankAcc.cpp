// https://codeforces.com/problemset/problem/313/A
// Ilya and Bank Account
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        string s1 = to_string(n);
        
        char last = s1[s1.size() - 1];
        
        s1.pop_back();
        int ilast = stoi(s1);
        
        s1.pop_back();
        int islast = stoi(s1 + last);
        cout << max(ilast, islast);
    }
    return 0;
}