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


//bottom up
int f( vector<int>&v ) {

	int n = v.size();
	vector<int>dp(n + 1, 0);

	dp[0] = v[0];
	dp[1] = max(dp[0], v[1]);

	for (int i = 2; i < n; i++ ) {

		dp[i] = max( v[i] + dp[i - 2] , 0 + dp[i - 1] );

	}

	return dp[n - 1];

}


//top down
int f(int ind, vector<int>&v, vector<int>&dp) {

	if (ind == 0)return max(v[0], 0);
	if (ind == 1)return max(v[1], v[0]);
	if (dp[ind] != -1)return dp[ind];



	dp[ind] = max( v[ind] + f(ind - 2, v, dp) , 0 + f(ind - 1, v, dp) );



	return dp[ind];
}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		// cout << f(v) << endl;
		vector<int>dp(n + 1, -1);

		cout << f(n - 1, v, dp) << endl;
	}


	return 0;
}


/*

1
6
6 10 12 7 9 14


*/