// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/perfect-pair-df920e90/description/
// Perfect Pair
// Basic Hashing
// TLE / TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

// Important: Defining default arguments in declaration 
bool isPerfRoot(double);

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    int t, n, count;
    cin >> t;
    while (t--)
    {
        int z = 0;
        count = 0;
        cin >> n;
        vector <double> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                count += isPerfRoot(a[i] + a[j]);
            }
        }
        cout << count << "\n";
    }
    return 0;
}

bool isPerfRoot(double num)
{
    double x = sqrt(num);
    if ((x - floor(x)) == 0)
    {
        return 1;
    }
    x = cbrt(num);
    if ((x - floor(x)) == 0)
    {
        return 1;
    }
    return 0;
}