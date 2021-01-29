// https://codeforces.com/problemset/problem/114/A
// Cifera
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
    
    int a, b;
    cin >> a;
    cin >> b;

    int multiplier = a;
    int importance = 0;
    
    while (a < b)
    {
        a *= multiplier;
        importance++;
    }
    if (a == b)
    {
        cout << "YES\n" << importance;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}