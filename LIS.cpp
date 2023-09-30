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
int f(vector<int>&v) {

	int n = v.size();
	vector<int>dp(n + 1, 1);

	int ans = 1;
	for (int i = 1; i < n; i++) {

		for (int j = 0; j < i; j++) {

			if (v[i] > v[j]) {

				dp[i] = max(dp[i], 1 + dp[j]);
				ans = max(ans, dp[i]);
			}

		}
	}

	return ans;
}

/*int lis(int i, vector<int>&v, vector<int>&dp, int n) {


	if (dp[i] != -1)return dp[i];
	int ans = 1;

	int temp = INT_MIN;
	for (int j = 0; j < n; j++) {

		if (v[i] > v[j]) {
			temp = max( f(i, v, dp, n), 1 + f(j, v, dp, n) );
			ans = max(ans, temp);
		}
	}

	return dp[i] = temp;

}*/

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		// cout << f(v) << endl;
		vector<int>dp(n + 1, 1);
		cout << f(1, v, dp, n) << endl;

	}


	return 0;
}