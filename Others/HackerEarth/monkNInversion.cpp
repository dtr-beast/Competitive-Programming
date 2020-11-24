// Code Monk
// Monk and Inversion
// Arrays & Strings - 2
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

    int t, n, k, x, y, z, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0;
        vector <vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];                
            } 
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int x = i; x < n; x++)
                {
                    for (int y = j; y < n; y++)
                    {
                        if (a[i][j] > a[x][y])
                        {
                            count++;
                        }
                    }
                    
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}