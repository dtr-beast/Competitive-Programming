// https://www.hackerrank.com/challenges/the-power-sum/problem
// The Power Sum
// DSA (Recursion)
// TODO: Implement
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

int powerSum(int, int);
signed main()
{
	fastio
    int x, n;
	cin >> x >> n;
    cout << powerSum(x, n) << endl;

	return 0;
}

int powerSum(int x, int n)
{
    int maxValue = pow(x, 1.0/n);



    return ;
}