// https://codeforces.com/problemset/problem/136/A
// Presents
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

    vector <int> v1(n), v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    /*
    All that needs to be done is to order the value OF THE indexes ('0' in v[0])  (starting from 1) according the value AT THE index (value present at 'v[0]'),  
    e.g-
        2 3 4 1 (Presents)
        1 2 3 4 (Indexes, starting from 1)

        The index '1' should be at the value of the index '1' i.e '2' in this case.
    ie  _ 1 _ _
        The index '2' should be at the value of the index '1' i.e '3' in this case.
    ie  _ 1 2 _
        The index '3' should be at the value of the index '1' i.e '4' in this case.
    ie  _ 1 2 3
        The index '4' should be at the value of the index '1' i.e '1' in this case.
    ie  4 1 2 3
    */
   
    for (int i = 0; i < n; i++)
    {
        v2[v1[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }

	return 0;
}