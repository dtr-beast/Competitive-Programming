// https://codeforces.com/problemset/problem/478/B
// Random Teams
// A2OJ
// TODO: Wrong answer on test 4
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl "\n"

using namespace std;

template <typename T>
T makeFriendsPairs(T);

signed main()
{
	fastio

    double players, teams;
    cin >> players >> teams;

    double div = players / teams;
    
    int minFriends, maxFriends;
    
    // Evenly divide players and count the number of friend
    if (div == (int) div)
    {
        minFriends = makeFriendsPairs(div) * teams;
    }
    // If can't be divided evenly, make 1 player team until equally divided teams can be made  
    else
    {
        int tempPlayers = players;
        int tempTeams = teams;
        while (tempPlayers % tempTeams != 0)
        {
            tempPlayers--;
            tempTeams--;
        }
        minFriends = makeFriendsPairs(tempPlayers);
    }

    // Make all teams except one with a single player, and accumulate the last team with most members to increase friend pairs
    maxFriends = players - (teams - 1);
    maxFriends = makeFriendsPairs(maxFriends);


    cout << minFriends << " " << maxFriends;
	return 0;
}

template <typename T>
T makeFriendsPairs(T x)
{
    return ((x * (x - 1)) / 2);
}
