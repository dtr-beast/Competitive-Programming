// https://codeforces.com/problemset/problem/510/A
// Fox And Snake
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int n, m;
    cin >> n >> m;
    vector <vector<char>> a(n);
    
    // Fill the odd rows with '####'  
    for (int i = 0; i < n; i += 2)
    {
        a[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            a[i][j] = '#';
        }
    }
    
    // Fill the even rows with '...#' or '#...' 
    bool right = false;     // To switch the fillings side 
    for (int i = 1; i < n; i += 2)
    {
        a[i].resize(m);
        if (!right)
        {   
            for (int j = 0; j < m - 1; j++)
            {
                a[i][j] = '.';
            }
            a[i][m - 1] = '#';
        }
        else
        {
            for (int j = 1; j < m; j++)
            {
                a[i][j] = '.';
            }
            a[i][0] = '#';
        }
        right = !right;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

	return 0;
}