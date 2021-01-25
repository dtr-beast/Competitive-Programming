// https://codeforces.com/problemset/problem/445/A
// DZY Loves Chessboard
// A2OJ
// TODO: Wrong answer on test 5
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

        int n,
        m;

    cin >> n >> m;
    vector<vector<char>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    char chess[] = {'B', 'W'};
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                if (i - 1 >= 0)
                {
                    if (v[i - 1][j] == chess[x % 2])
                    {
                        x++;
                    }
                }
                else if (j - 1 >= 0)
                {
                    if (v[i][j - 1] == chess[x % 2])
                    {
                        x++;
                    }
                }
                v[i][j] = chess[x % 2];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}