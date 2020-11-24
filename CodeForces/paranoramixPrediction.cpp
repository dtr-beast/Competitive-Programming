// Link Missing
// Panoramix's Prediction
// A2OJ
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

    int primearr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int m, n, index;
    cin >> m >> n;
    for (int i = 0, j = 14; j >= i; i++, j--)
    {
        if (primearr[i] == m)
        {
            index = i;
            break; 
        }
        if (primearr[j] == m)
        {
            index = j;
            break;
        }
    }
    if (primearr[index + 1] == n)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}