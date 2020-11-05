// https://www.codechef.com/problems/CVDRUN
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

	int t, cities, jumps, ccity, mycity;
	cin >> t;
    
	while (t--)
	{
        cin >> cities >> jumps >> ccity >> mycity;
        bool cvd = false;
        for (int i = 1; i <= cities; i++)
        {
            // If the Jump equals to mycitys
            if ((ccity + jumps * i) % cities == mycity)
            {
                cvd = true;
                break;
            } 
        }
        cout << (cvd ? "YES" : "NO") endl;
	}
	return 0;
}