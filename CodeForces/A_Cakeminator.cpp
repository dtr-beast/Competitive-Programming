// https://codeforces.com/problemset/problem/330/A
// Cakeminator
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

    int r, c;
    cin >> r >> c;

    char a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int eaten = 0;

    int i, j, k;
    // Eat Horizontally (ROWS)
    for (i = 0; i < r; i++)
    {
        bool no_evil = true;
        for (j = 0, k = c - 1; k >= j; j++, k--)
        {
            // Find if there is an evil strawberry 'S' in the row
            if ((a[i][j] == 'S') || (a[i][k] == 'S'))
            {
                no_evil = false;
                break;
            }
        }
        // If there is no 'S'
        if (no_evil)
        {
            // Eat horizontally and clear out the row
            for (int j = 0; j < c; j++)
            {
                a[i][j] = '-';
            }
            eaten += c;
        }
    }
    // Eat vertically (COLUMNS)
    for (j = 0; j < c; j++)
    {
        bool no_evil = true;
        int to_eat = 0;
        for (i = 0; i < r; i++)
        {
            // Find leftovers
            if (a[i][j] == '.')
            {
                to_eat++;
            }
            else if (a[i][j] == 'S')
            {
                no_evil = false;
                break;
            }
        }
        // If the loop executed successfully
        if (no_evil)
        {
            eaten += to_eat;
        }
    }

    cout << eaten;

    return 0;
}