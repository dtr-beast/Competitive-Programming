// https://codeforces.com/problemset/problem/230/B
// T-primes
// A2OJ
// TODO: Time limit exceeded on test 7 (was getting TLE on 5, brought time from O(n / 2) to O(root(n)))
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
    fastio

        unsigned int n;
    cin >> n;

    unsigned int x, divisors;

    for (unsigned int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 4)
        {
            cout << "YES\n";
        }
        else if (!(x & 1)) // Even Number
        {
            cout << "NO\n";
        }
        else
        {
            divisors = 0;
            for (int i = 3; i * i <= x; i += 2)
            {
                if (x % i == 0)
                {
                    if (++divisors > 1)
                    {
                        break;
                    }
                }
            }
            cout << ((divisors == 1) ? "YES\n" : "NO\n");
        }
    }

    return 0;
}

// int m = (x + 1) / 2;
//             divisors = 0;
//             while (m && m != 1)
//             {
//                 if (x % m == 0 || x % max((m - 1), 2LL) == 0)
//                 {
//                     if (++divisors > 1)
//                     {
//                         break;
//                     }
//                 }
//                 m = (m + 1) / 2;
//             }