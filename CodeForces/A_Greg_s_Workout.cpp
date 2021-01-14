// https://codeforces.com/problemset/problem/255/A
// Greg's Workout
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

	int t, n, k, x, y, z, count;
	cin >> t;
    x = y = z = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> k;
        if (i % 3 == 1)
        {
            x += k;
        }
        else if (i % 3 == 2)
        {
            y += k;
        }
        else
        {
            z += k;
        }
    }
    
    n = max(max(x, y), z);
    if (n == x)
    {
        cout << "chest";
    }
    else if (n == y)
    {
        cout << "biceps";
    }
    else
    {
        cout << "back";
    }
    
    
	return 0;
}