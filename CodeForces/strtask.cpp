// https://codeforces.com/problemset/problem/118/A
// TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

        string t,
        out;
    cin >> t;
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == 'a' || t[i] == 'o' || t[i] == 'y' || t[i] == 'e' || t[i] == 'u' || t[i] == 'i')
        {
            t.erase(t.begin() + i);
        }
        else
        {
            t.insert(t.begin() + i, '.');
        }
    }
    cout << t;
    return 0;
}