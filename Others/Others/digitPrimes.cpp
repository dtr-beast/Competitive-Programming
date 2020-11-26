// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1474
// 10533 - Digit Primes
// Prefix Sum
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
#ifndef ONLINE_JUDGE
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);
#endif
    fastio

    // cout << "Hello";
    string s1;
    int n = 1000000, x;
    bool prime[n + 1];
    memset(prime, true, n + 1);

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    vector <int> a(n);
    int num;
    for (int i = 0; i < n; i++)
    {
        if (prime[i])
        {
            x = i;
            num = 0;
            while (x)
            {
                num += x % 10;
                x /= 10;
            }
            if (prime[num])
            {
                a.push_back(i);
            }
        }
    }
    
    
    // int a[10] = {};
    // vector <int> primePrefix[1000000];

    // for (int i = 1; i < n; i++)
    // {
    //     primePrefix[i] = prime[i] + primePrefix[i - 1];
    // }    

    int t, k, x, y, z, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> x >> y;
        for (int i = x; i <= y; i++)
        {
            count += prime[i];
        }
        cout << count << endl;

        // cout << primePrefix[y] - primePrefix[x] << endl;
    }

    return 0;
}
// void SieveOfEratosthenes(int n)
// {
//     // Create a boolean array "prime[0..n]" and initialize
//     // all entries it as true. A value in prime[i] will
//     // finally be false if i is Not a prime, else true.

//     for (int p=2; p*p<=n; p++)
//     {
//         // If prime[p] is not changed, then it is a prime
//         if (prime[p] == true)
//         {
//             // Update all multiples of p greater than or
//             // equal to the square of it
//             // numbers which are multiple of p and are
//             // less than p^2 are already been marked.
//             for (int i=p*p; i<=n; i += p)
//                 prime[i] = false;
//         }
//     }

//     // Print all prime numbers
//     for (int p=2; p<=n; p++)
//        if (prime[p])
//           cout << p << " ";
// }
