// https://codeforces.com/problemset/problem/131/A
// cAPS lOCK
// Random
// TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio

    string s1;
    cin >> s1;
    bool need_change = true;

    for (int i = 1; i < s1.length(); i++)
    {
        if (islower(s1[i]))
        {
            need_change = false;
            break;
        }
    }

    if (need_change)
    {
        s1[0] = toupper(s1[0]);
        transform(s1.begin() + 1, s1.end(), s1.begin() + 1, ::tolower);
    }

    cout << s1;

    return 0;
}