// https://codeforces.com/problemset/problem/122/A
// Lucky Division
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
    
	int num;
    cin >> num;
    if (num % 4 == 0 || num % 44 == 0 || num % 444 == 0 || num % 7 == 0 || num % 77 == 0 || num % 777 == 0 \
    || num % 47 == 0 || num % 74 == 0 || num % 447 == 0 || num % 474 == 0 || num % 744 == 0 || num % 774 == 0 \
    || num % 747 == 0 || num % 477 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
	return 0;
}