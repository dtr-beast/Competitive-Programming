// https://codeforces.com/problemset/problem/296/A
// Yaroslav and Permutations
// A2OJ
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	double n;
    cin >> n;

    map <int, int> m;
    int temp, maxi = 0;
    
    // The max number of same elements can at most be the ceil(half) of the whole input array  
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;

        if (m[temp] > maxi) 
        {
            maxi = m[temp];
        }
    }
  
    cout << ((ceil(n / 2) >= maxi) ? "YES" : "NO");    

	return 0;
}