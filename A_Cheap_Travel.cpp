// https://codeforces.com/problemset/problem/466/A
// Cheap Travel
// A2OJ
// TODO
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

    // int mini = INT64_MAX;
    // int min_charge = min((m_ride_cost / m_rides), one_ride);
    // if ((m_ride_cost / m_rides) < one_ride)
    // {
    //     int crides = 0;
    //     int cost = 0;
    //     while (true)
    //     {
    //         if (crides + m_rides <= rides)
    //         {
    //             cost += m_ride_cost;
    //             crides += m_rides;
    //         }
    //         else
    //         {
    //             break;
    //         } 
    //     }
    //     cost += (rides - crides) * one_ride;
    //     cout << cost;
    // }
    // else
    // {
    //     cout << one_ride * rides;
    // }
    // int minp = rides * one_ride;

    // int cost, mrides, mcost;
    // for (int ticket = 0; ticket * m_rides <= rides; ticket++)
    // {
    //     mcost = (m_ride_cost * ticket);
    //     mrides = ticket * m_rides;

    //     cost = (rides - mrides) * one_ride + mcost;
    //     if (cost < minp)
    //     {
    //         minp = cost;
    //     }
    // }
    // cout << minp;

    return 0;
}