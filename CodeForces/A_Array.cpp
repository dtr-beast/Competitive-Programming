// https://codeforces.com/problemset/problem/300/A
// Array
// A2OJ
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

void printVector(vector<int> &);

signed main()
{
    fastio

    int n;
    cin >> n;

    vector<int> v(n);

    bool positiveCount = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] > 0)
        {
            positiveCount = 1;
        }
    }

    vector<int> v1, v2, v3;

    // Only one positive number is needed to make the array product positive.
    if (positiveCount)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > 0)
            {
                v2.push_back(v[i]);
                v.erase(v.begin() + i);
                break;
            }
        }
    }
    else
    {
        // In case there is no positive number, two negative numbers will be needed to make the array product positive.
        int twoNegatives = 0;
        for (int i = 0; i < v.size() && twoNegatives < 2; i++)
        {
            if (v[i] < 0)
            {
                v2.push_back(v[i]);
                v.erase(v.begin() + i);
                i--;
                twoNegatives++;
            }
        }
    }

    // Only one negative number is needed to make the array product negative.
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            v1.push_back(v[i]);
            v.erase(v.begin() + i);
            break;
        }
    }

    // Dump all other elements in the zero vector. (Since we know there will be atleast one "0")
    for (int i = 0; i < v.size(); i++)
    {
        v3.push_back(v[i]);
    }

    printVector(v1);    // Negative
    printVector(v2);    // Positive
    printVector(v3);    // Zero

    return 0;
}

void printVector(vector<int> &v)
{
    cout << v.size() << " ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}