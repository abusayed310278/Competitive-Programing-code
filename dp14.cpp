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

//recursion memoization

int f(int ind, int target, vector<int>&v, vector<vector<int>>&dp) {

	if (target == 0)return 1;
	if (ind == 0)return v[0] == target;
	if (dp[ind][target] != -1)dp[ind][target];


	bool nottake = f(ind - 1, target, v, dp);
	bool take = false;

	if (target >= v[ind])
		take = f(ind - 1, target - v[ind], v, dp);

	return dp[ind][target] = nottake | take;

}


int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n, target; cin >> n >> target;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<vector<int>>dp(n + 1, vector<int>(target + 1, -1));

		cout << f(n - 1, target, v, dp) << endl;
	}

	return 0;
}