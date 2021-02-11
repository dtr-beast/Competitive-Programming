// https://www.codechef.com/FEB21C/problems/MAXFUN
// Maximise Function
// FEB21C Long Challenge
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

int absSum(int, int, int);

signed main()
{
    fastio

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
      
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int max1 = v[0], max2 = v[1], max3 = v[2];
        int min1 = v[0], min2 = v[1], min3 = v[2];


        for (int i = 3; i < n; i++)
        {
            if (v[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = v[i];
            }
            else if (v[i] > max2)
            {
                max3 = max2;
                max2 = v[i];
            }
            else if (v[i] > max3)
            {
                max3 = v[i];
            }

            if (v[i] < min1)
            {
                min3 = min2;
                min2 = min1;
                min1 = v[i];
            }
            else if (v[i] < min2)
            {
                min3 = min2;
                min2 = v[i];
            }
            else if (v[i] < min3)
            {
                min3 = v[i];
            }
        }

        int minValues[] = {min1, min2, min3, max1, max2, max3};
 
        int maxValue = -1;
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                for (int k = j + 1; k < 6; k++)
                {
                    int temp;
                    if ((temp = absSum(minValues[i], minValues[j], minValues[k])) >= maxValue)
                    {
                        maxValue = temp;
                    }
                }
            }
        }
        cout << maxValue << endl;
    }

    return 0;
}
int absSum(int a, int b, int c)
{
    return (abs(a - b) + abs(b - c) + abs(c - a));
}

/*------------------Smaller Solution--------------------------------------
(Max Element - Min Element) * 2
*/