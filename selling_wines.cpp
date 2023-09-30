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
int f(int l, int r, int y, vector<int>&v, vector<vector<int>>&dp) {

	if (l > r)return 0;
	if (dp[l][r] != -1)return dp[l][r];

	return dp[l][r] = max( v[l] * y + f(l + 1, r, y + 1, v, dp) ,
	                       v[r] * y + f(l, r - 1, y + 1, v, dp) );


}

//bottom up
int f(vector<int>&v) {

	int n = v.size();
	vector<vector<int>>dp(n + 1, 0);

	

	dp[l][r] = max( v[l] * y + dp[l + 1][r]  , v[r] * y + dp[l] [r - 1] );

	return dp[][];
}


int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<vector<int>>dp(n + 1, vector<int>(n + 1, -1));
		// cout << f(0, n - 1, 1, v, dp) << endl;


	}

	return 0;
}


/*

1
5
2 3 5 1 4

*/