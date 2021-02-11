// https://www.codechef.com/FEB21C/problems/FROGS
// Frog Sort
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

	int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> weights(2 * n), sortedWeights(n), jumps(n);

        for (int i = 0; i < n; i++)
        {
            cin >> weights[i];
            sortedWeights[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> jumps[i];
        }


    }

	return 0;
}

/*
3 1 2
1 2 3
*/