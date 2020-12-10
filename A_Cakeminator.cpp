// https://codeforces.com/problemset/problem/330/A
// Cakeminator
// A2OJ
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

    int eat = 0;

    // Declare variables globally to  retain data
    int i, j, k;
    // Eat Horizontally
    for (i = 0; i < r; i++)
    {
        for (j = 0, k = c - 1; j < k; j++, k--)
        {
            // Find if there is an 'S' in the row
            if ((a[i][j] == 'S') || (a[i][k] == 'S'))
            {
                break;
            }
        }
        // If there is no 'S'
        if (j >= k)
        {
            // Eat horizontally and clear out the row
            for (int j = 0; j < c; j++)
            {
                a[i][j] = '-';
            }
            eat += c;
        }    
    }

    // Eat vertically
    for (j = 0; j < c; j++)
    {
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
                break;
            }
        }
        // If the loop executed successfully
        if (i == r)
        {
            eat += to_eat;
        }
    }

    cout << eat;

	return 0;
}