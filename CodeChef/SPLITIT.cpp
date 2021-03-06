// https://www.codechef.com/problems/SPLITIT
// 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int t, len;
    string s1;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> len;
        cin >> s1;
        c = *s1.rbegin();
        bool yes = false;
        for (int i = 0; i < s1.length() - 1; i++)
        {
            if (c == s1[i])
            {
                cout << "YES\n";
                yes = true;
                break;
            }
        }
        if (!yes)
        {
            cout << "NO\n";
        }
    }
    return 0;
}