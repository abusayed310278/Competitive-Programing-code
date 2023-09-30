#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


int f(int s, int e, int k,unordered_map<int, unordered_map<int,int>>&dp){

	if (s == e and k == 0)return 1;
	if (k == 0)return 0;
	if (dp[s].count(k))return dp[s][k];


	return dp[s][k] = f(s - 1, e, k - 1, dp) + f(s + 1, e, k - 1, dp);
}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int s, e, k; cin >> s >> e >> k;
		unordered_map<int, unordered_map<int,int>>dp;
		cout << f(s, e, k, dp) << endl;
	}


	return 0;
}

/*

1
1 2 3

*/