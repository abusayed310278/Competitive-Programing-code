#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;



int f(int i, int n, vector<int>&v, int time, vector<vector<int>>&dp) {

	if (i == n)return 0;
	if (dp[i][time] != -1)return dp[i][time];

	return dp[i][time] = max( v[i] * time + f(i + 1, n, v, time + 1, dp)   , f(i + 1, n, v, time , dp));
}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		sort(begin(v), end(v));

		vector<vector<int>>dp(n, vector<int>(n + 1, -1));

		cout << f(0, n, v, 1, dp) << endl;
	}

	return 0;
}