// https://www.codechef.com/problems/TREE2
// 
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

    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >>  n;
        set <int> nums;     // Count the distinct number of elements except zero
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            nums.insert(x); 
        }

        if (nums.find(0) == nums.end())
        {
            x = nums.size();
        }
        else
        {
            x = nums.size() - 1;
        }
        cout << x endl
    }
    return 0;
}