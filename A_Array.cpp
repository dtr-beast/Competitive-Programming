// https://codeforces.com/problemset/problem/300/A
// Array
// A2OJ
// TODO
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;


void print_vector(vector<int>&);

signed main()
{
	fastio

    int n;
    cin >> n;

    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector <int> v1, v2, v3;

    for (int i = 0; i < v.size(); i++)
    {
     
        if (v[i] < 0)
        {
            v1.push_back(v[i]);
            v.erase(v.begin() + i);
            break;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            v3.push_back(v[i]);
            v.erase(v.begin() + i);
            break;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            v2.push_back(v[i]);
            v.erase(v.begin() + i);
            break;
        }
    }

    if (v2.empty())
    {
        int negativeCount = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < 0)
            {
                v2.push_back(v[i]);
                negativeCount++;
            }
            if (negativeCount == 2)
            {
                break;
            }
        }
    }
    
    print_vector(v1);
    print_vector(v2);
    print_vector(v3);

	return 0;
}

void print_vector(vector<int> &v)
{
    cout << v.size() << " ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}