// https://codeforces.com/problemset/problem/466/A
// Cheap Travel
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

    double rides, m_rides, one_ride, m_ride_cost;
    cin >> rides >> m_rides >> one_ride >> m_ride_cost;

    // Minimum value amonng all single ride tickets and all special multi-ride tickets
    int minp = min(rides * one_ride, ceil(rides / m_rides) * m_ride_cost);

    int cost, mrides, mcost;
    // Total rides should not be much more than the target rides 
    for (int ticket = 0; ticket * m_rides < rides + m_rides; ticket++)
    {
        mcost = (m_ride_cost * ticket);
        mrides = ticket * m_rides;

        // No negative value here
        cost = max(rides - mrides, 0.0L) * one_ride + mcost;
        if (cost < minp)
        {
            minp = cost;
        }
    }
    cout << minp;

    return 0;
}