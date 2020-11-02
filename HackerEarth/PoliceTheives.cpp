// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/joker-and-thieves-53e59f4a/
// TODO
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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

        int t,
        n, k, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        char p[n][n];
        // cin >> p[0][0];
        // vector <char, char> p(n);
        for (int i = 0; i < n; i++)
        {
            // p[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> p[i][j];
            }
        }
        c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (p[i][j] == 'P')
                {
                    p[i][j] = '0';
                    for (int l = 1; l <= k; l++)
                    {
                        if (j + l < n)
                        {
                            if (p[i][j + l] == 'T')
                            {
                                p[i][j + l] = '0';
                                c++;
                                break;
                            }
                        }
                        if (j - l >= 0)
                        {
                            if (p[i][j - l] == 'T')
                            {
                                p[i][j - l] = '0';
                                c++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << c << "\n";
    }
    return 0;
}