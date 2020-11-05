// https://www.codechef.com/problems/DWW19D
// TODO
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

	int t, n, k, count;
	cin >> t;
	while (t--)
	{
        int l = 0, r = 0, maxs;
        bool kmatch = false;
		count = 0;
        cin >> n >> k;
        
        vector <int> pr;
        pr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> pr[i];
            // count += pr[i];
            if (count < k)
            {
                count += pr[i];
            }
            else if (count == k)
            {
                cout << l << " " << i + 1 << k endl
                kmatch = true;
                break;
            }
            else if ((count > k) && (i != 1))
            {
                r = i + 1;
            }
            
        }
        // maxs 
        if (kmatch)
        {
            continue;
        }
        maxs = count;
        for (int i = r; i < count; i++)
        {


        }
	}

	return 0;
}