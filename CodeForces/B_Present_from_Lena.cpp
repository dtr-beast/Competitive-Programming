// https://codeforces.com/problemset/problem/118/B
// Present from Lena
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

	int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << j;
            }
            else
            {
                cout << j << " ";
            }            
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }

        cout << endl;
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << j;
            }
            else
            {
                cout << j << " ";
            }
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << " " << j;
        }
        
        cout << endl;
    }

	return 0;
}