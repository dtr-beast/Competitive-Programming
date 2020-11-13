// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/
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

    int n, sum = 0, num = 0, k, maxnum = INT64_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k >= 0)         // Just count all of the positive numbers and take the total
        {
            sum += k;
            num++;
        }
        else if (maxnum < k)
        {
            maxnum = k;
        }
    }
    if (!sum && !num)   // Corner Case: If all the elements are negative, output the greatest number with num = 1
    {
        sum = maxnum;
        num = 1;
    }
    cout << sum << " " << num;
    return 0;
}