// 
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

	int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    cin >> b;
    arr.erase(arr.begin() + b - 1);
    cin >> b >> a;
    
    arr.erase(arr.begin() + b - 1, arr.begin() + a - 1);
    cout << arr.size() << "\n";
    for (int x: arr)
    {
        cout << x << " ";
    }
    
	return 0;
}