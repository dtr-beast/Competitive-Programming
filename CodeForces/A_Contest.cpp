// https://codeforces.com/problemset/problem/501/A
// Contest
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

    double a, b, c, d;
    cin >> a >> b >> c >> d >> d;
    double mishaA = (3 * a) / 10,
    mishaB =  a - (a / 250) * c,
    vasyaA =  (3 * b) / 10, 
    vasyaB = b - (b / 250) * d;

    double maxValue = max(max(mishaA, mishaB), max(vasyaA,vasyaB));
    

    if ((maxValue == mishaA || maxValue == mishaB) && (maxValue == vasyaA || maxValue == vasyaB))
    {
        cout << "Tie";
    }
    else if (maxValue == mishaA || maxValue == mishaB)
    {
        cout << "Misha";
    }
    else if (maxValue == vasyaA || maxValue == vasyaB)
    {
        cout << "Vasya";
    }
    
	return 0;
}