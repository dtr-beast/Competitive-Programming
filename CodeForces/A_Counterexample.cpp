// https://codeforces.com/problemset/problem/483/A
// Counterexample
// A2OJ
#include <bits/stdc++.h>
#define fastio                        \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

bool isCoPrime(int, int);
signed main()
{
	fastio

	int l, r;
	cin >> l >> r;

	bool found = false;

	int a, b, c;
	for (int i = l; i <= r; i++)
	{
		for (int j = i + 1; j <= r; j++)
		{
			if (isCoPrime(i, j))
			{
				for (int k = j + 1; k <= r; k++)
				{
					if (isCoPrime(j, k) && !isCoPrime(i, k))
					{
						found = true;
						a = i;
						b = j;
						c = k;
						break;
					}
				}
			}
			if (found)
			{
				break;
			}
		}
		if (found)
		{
			break;
		}
	}

	if (found)
	{
		cout << a << " " << b << " " << c;
	}
	else
	{
		cout << -1;
	}

	return 0;
}
bool isCoPrime(int a, int b)
{
	return (__gcd(a, b) == 1);
}