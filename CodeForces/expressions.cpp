// https://codeforces.com/problemset/problem/479/A
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

	int a, b, c;
	cin >> a >> b >> c;
    // Calculate every possible expression and then find the maximum element
    int arr[] = {(a + b + c), (a + (b * c)), ((a + b) * c), ((a * b) + c), (a * (b + c)), (a * b * c)};
    cout << *max_element(arr, arr + 6);
	return 0;
}