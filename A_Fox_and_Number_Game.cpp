// https://codeforces.com/problemset/problem/389/A
// Fox and Number Game
// A2OJ
// TODO: Implement
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

int reduceSum(vector<int>&, int);
signed main()
{
	fastio

	int n;
    cin >> n;

    vector <int> v(n);
    
    int mini = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < mini) 
        {
            mini = v[i];
        }
    }

    cout << reduceSum(v, mini);
    
    // sort(v.begin(), v.end());

	return 0;
}
void reduceByN(vector<int>& v, int n)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] -= n;
    }
}

int reduceSum(vector<int>& v, int mini)
{
    int x = v[0];
    int mini = x;
    bool minimalSum = true;
    int i;
    for (i = 1; i < v.size(); i++)
    {
        if (x != v[i])
        {
            minimalSum = false;
            if (v[i] < mini)
            {
                mini = v[i];
            }
            break;
        }
    }
    for (; i < v.size(); i++)
    {

    }
}