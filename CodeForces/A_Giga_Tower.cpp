// https://codeforces.com/problemset/problem/488/A
// Giga Tower
// A2OJ
// UNIMPORTANT: Improve Efficiency
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

bool checkEight(int n) 
{
    string s1 = to_string(n);
    return (s1.find('8') != string::npos);
}

signed main()
{
	fastio

    int n;
    cin >> n;
    n++;
    int i = 1;

    while (!checkEight(n))
    {
        i++;
        n++;
    }
    cout << i;

	return 0;
}