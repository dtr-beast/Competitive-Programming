// Total Score
// https://www.codechef.com/CCRC21C/problems/TOTSCR
// DIV3 FEBRUARY CHALLENGE
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int t, n, k;
	cin >> t;

	while (t--)
	{
        cin >> n >> k;

        vector <int> marks(k);
        for (int i = 0; i < k; i++)
        {
            cin >> marks[i];
        }

        vector <string> solveList(n);
        for (int i = 0; i < n; i++)
        {
            cin >> solveList[i];

            int mark = 0;
            for (int j = 0; j < k; j++)
            {
                if (solveList[i][j] == '1')
                {
                    mark += marks[j];
                }
            }
            cout << mark << endl;
        }
	}

	return 0;
}