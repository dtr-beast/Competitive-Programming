https://www.codechef.com/problems/DIFFSUM
#include <bits/stdc++.h>
using namespace std;

int main()
#define int long long
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    cout << ((a > b) ? a - b: a + b);

	return 0;
}