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

//top down
int f(int ind, int k, vector<int>&v, vector<vector<int>>&dp) {

	if (ind == 0) {
		if (k % v[0]==0)return k / v[0]; else return 1e9;
	}

	if (dp[ind][k] != -1)return dp[ind][k];

	int nottaken = 0 + f(ind - 1, k, v, dp);

	int taken = 1e9;
	if (v[ind] <= k)
		taken = 1 + f(ind, k - v[ind], v, dp);

	return dp[ind][k] = min(taken , nottaken);
}



int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<vector<int>>dp(n, vector<int>(k + 1, -1));
		cout << f(n - 1, k, v, dp) << endl;


	}

	return 0;
}