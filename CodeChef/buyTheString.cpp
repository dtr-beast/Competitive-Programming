// https://codeforces.com/contest/1440/problem/A
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

    int t, num;
    cin >> t;
    while (t--)
    {
        int n, c0, c1, h, zero, one, price;
        zero = one = price = 0;
        cin >> n >> c0 >> c1 >> h;
        
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int
        cprice = c0 * zero + c1 * one, 
        zprice = c0 * n,
        oprice = c1 * n,
        hprice;
        
        
        // if (c0 < c1)
        // {
        //     hprice = h * one + c0 * n;
        // }
        // else if (c1 < c0)
        // {
        //     hprice = h * zero + c1 * n;
        // }
        // cout << ((zprice < oprice) ? ((zprice < hprice) ? zprice : hprice): (oprice < hprice)? oprice : hprice) endl
    }
    return 0;
}