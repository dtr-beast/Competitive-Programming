// https://codeforces.com/problemset/problem/4/C
// Registration system
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

    int t, count;
    string s1, s2;
    cin >> t;
    map<string, int> reg;
    while (t--)
    {
        cin >> s1;
        if (reg.find(s1) == reg.end())
        {
            reg.insert({s1, 1});
            cout << "OK\n";
        }
        else
        {
            count = reg[s1]++;
            s2 = to_string(count);
            s1 += s2;
            reg.insert({s1, 1});
            cout << s1 << endl;
        }
    }
    return 0;
}