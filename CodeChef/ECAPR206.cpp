// https://www.codechef.com/problems/ECAPR206
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

	int t, arr_len, k, c, count;
	string s1, s2, s3;
	cin >> t;
	
	while (t--)
	{
		vector <int> arr;

		cin >> arr_len >> k;
		arr.resize(arr_len);
		for (int i = 0; i < arr_len; i++)
		{
			cin >> arr[i];
		}

		int win_sum = 0;
		for (int i = 0; i < k; i++)
		{
			win_sum += arr[i];
		}
		
		int max_sum = win_sum;
		for (int i = k; i < arr_len + k; i++)
		{
			win_sum += arr[i % arr_len] - arr[i - k];
			if (max_sum < win_sum)
			{
				max_sum = win_sum;
			}
		}
		cout << max_sum endl;
	}
	return 0;
}