// https://www.codechef.com/FEB21C/problems/HDIVISR
// Highest Divisor
// FEB21C Long Challenge 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

    int n;
    cin >> n;

    int maxDivisor = 1;
    for (int i = 2; i <= min(n / 2, 10LL); i++)
    {
        if (n % i == 0)
        {
            if (i > maxDivisor)
            {
                maxDivisor = i;
            }
        }
    }

    cout << maxDivisor;

	return 0;
}