// Chef and Patients
// https://www.codechef.com/CCRC21C/problems/CHEFPAT
// DIV3 FEBRUARY CHALLENGE
// TODO: Implement
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

signed main()
{
	fastio

	int t;

	cin >> t;
	while (t--)
	{
        int n;
        cin >> n;

        vector <int> v(n);

        unordered_map<int, int> freq;
        multiset <int> sortedPatients;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // freq[v[i]]++;
            sortedPatients.insert(v[i]);
        }

        int time = 1;
        for (auto i = sortedPatients.rbegin(); i != sortedPatients.rend(); i++, time++)
        {
            freq[*i] = time;
            // cout << *i << " ";
        }
        cout << freq[5]
	}

	return 0;
}