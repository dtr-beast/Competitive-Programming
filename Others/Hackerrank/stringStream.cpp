// 
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define double long double
#define int long long
#define endl << "\n";

using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("1input.txt", "r", stdin);
	freopen("1output.txt", "w", stdout);
#endif
	fastio

    stringstream s("23,4,56");
    string s1 = "asdf";
    string s2 = "by";
    // s1.replace(0, 1, 'x');
    cout << s1;
    swap(s1[0], s2[0]);
    int x = 5;


	return 0;
}