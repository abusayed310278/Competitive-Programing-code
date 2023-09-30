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
int f(int n, vector<int>&v, vector<int>&dp) {

	if (n == 0)return 0;
	if (dp[n] != -1)return dp[n];

	int ans = f(n - 1, v, dp) + abs(v[n - 1] - v[n]);

	if (n - 2 >= 0)
		ans = min( ans, f(n - 2, v, dp) + abs(v[n - 2] - v[n]) );

	return dp[n] = ans;
}

//bottom up
int f(int n, vector<int>&v) {

	vector<int>dp(n + 1, 0);


	dp[1] = dp[0] + abs(v[1] - v[0]);

	for (int i = 2; i < n; i++) {


		dp[i] = min( dp[i - 1] + abs(v[i - 1] - v[i]) ,
					 dp[i - 2] + abs(v[i - 2] - v[i]) );

	}

	return dp[n-1];
}


int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<int>dp(n + 1, -1);
		// cout << f(n - 1, v, dp) << endl;
		cout << f(n, v) << endl;
	}

	return 0;
}

/*

3
4
10 30 40 20
6
30 10 60 10 60 50
2
10 10


*/