// https://codeforces.com/problemset/problem/441/A
// Valera and Antique Items
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

    int n, v;
    cin >> n >> v;
    vector<int> s;
    int x, temp;
    for (int i = 0; i < n; i++)
    {
        bool inBudget = false;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            cin >> temp;
            if (temp < v)
            {
                inBudget = true;
            }
        }
        if(inBudget)
        {
            s.push_back(i + 1);
        }
    }

    cout << s.size() << endl;
    
    for(int x: s)
    {
        cout << x << " ";
    }
    
	return 0;
}