// https://codeforces.com/problemset/problem/404/A
// Valera and X
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

    int n;

    cin >> n;
    vector<vector<char>> a(n);
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        a[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            // Make a set to check there are only two characters
            s.emplace(a[i][j]);
        }
    }
    bool formX = true;
    char firs_char = a[0][0], second_char = a[0][1];

    for (int i = 0; i < n; i++)
    {
        // If the mirror characters don't match
        if (a[i][i] != firs_char || a[i][n - i - 1] != firs_char)
        {
            formX = false;
            break;
        }
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == (n - i - 1))
            {
                continue;
            }
            // If the other characters are not the second character
            else if (a[i][j] != second_char)
            {
                formX = false;
                break;
            }
        }
        // Any rule broken
        if (!formX)
        {
            break;
        }
    }
// They form X, they have only two characters
cout << ((formX && s.size() == 2) ? "YES" : "NO");

return 0;
}