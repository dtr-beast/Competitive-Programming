//
//
//
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio;

    string s;
    cin >> s;
    int left = 0, right = 0;
    int i = -1;
    while (s[++i] != '^')
        ;
    int l = i - 1, r = i + 1;

    while (l >= 0 && r < s.size())
    {
        if (s[l] != '=')
            left += (i - l) * (s[l] - '0');

        l--;
        if (s[r] != '=')
            right += (r - i) * (s[r] - '0');

        r++;
    }
    while (l >= 0)
    {
        if (s[l] != '=')
            left += (i - l) * (s[l] - '0');
        l--;
    }
    while (r < s.size())
    {
        if (s[r] != '=')
            right += (r - i) * (s[r] - '0');
        r++;
    }
    if (left == right)
    {
        cout << "balance";
    }
    else if (left < right)
    {
        cout << "right";
    }
    else
    {
        cout << "left";
    }

    return 0;
}