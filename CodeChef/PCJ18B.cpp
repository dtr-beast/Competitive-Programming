// https://www.codechef.com/problems/PCJ18B
#include <bits/stdc++.h>
using namespace std;

int main()
#define int long long
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
    int t, n, sum;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        for (; n > 0 ; n -= 2)
        {
            sum += n * n;   
        }
        cout << sum << "\n";
    }

	return 0;
}