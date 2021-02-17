// https://codeforces.com/problemset/problem/508/B
// Anton and currency you all know
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

signed main()
{
	fastio

	string s;
	cin >> s;
	int len = s.length();
	int lastDigit = s[len - 1] - '0';
	int currentDigit;

	int lastEven = -1;
	// The first even number to be found from the start that is less than the last digit (odd number) is found, it is swapped
	// This makes the greatest number, e.g 895689 -> 995688 
	for (int i = 0; i < len; i++)
	{
		currentDigit = s[i] - '0';
		if (!(currentDigit & 1))
		{
			// In case if there is no even number smaller than the last digit, but there IS an even number
			lastEven = i;
			if ((currentDigit < lastDigit))
			{
				swap(s[i], s[len - 1]);
				cout << s;
				return 0;
			}
		}
	}
	// If an even number exists
	if (lastEven != -1)
	{
		swap(s[lastEven], s[len - 1]);
		cout << s;
	}
	else
	{
		cout << -1;
	}
	return 0;
}