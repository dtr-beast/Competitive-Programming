// https://www.codechef.com/FEB21C/problems/MAXFUN
// Maximise Function
// FEB21C Long Challenge
// TODO: Improve O(n^3) -> O(n)
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int t, n, temp;
	cin >> t;
    int maxValue;
	while (t--)
	{
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        maxValue = 0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if((temp = (abs(v[i] - v[j]) + abs(v[j] - v[k]) + abs(v[k] - v[i]))) > maxValue)
                    {
                        maxValue = temp;
                    }
                }
            }
        }
        cout << maxValue << endl;
	}

	return 0;
}