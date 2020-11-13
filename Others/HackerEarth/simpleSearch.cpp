// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
// Linear Search
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

    int n, k;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (nums[i] == k) 
        {
            cout << i;
            break;
        }
        else if (nums[j] == k)
        {
            cout << j;
            break;
        }
    }
    return 0;
}