// https://codeforces.com/problemset/problem/443/A
// Anton and Letters
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

    set <char> a;
    char c;
    string s1;
    getline(cin, s1);
    stringstream str(s1);

    while (str >> c)
    {
        if (isalpha(c))
        {
            a.insert(c);
        }
    }
    cout << a.size();

    return 0;
}