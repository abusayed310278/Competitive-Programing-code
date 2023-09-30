#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;
vector<int>dp;

int f(int i, vector<int>&v) {

	if (i == 0)return v[0];
	if (i < 0)return 0;
	if (dp[i] != -1)return dp[i];

	int take = v[i] + f(i - 2, v);
	int nottake = 0 + f(i - 1, v);

	return dp[i] = max(take, nottake);
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n + 1);
		for (int i = 0; i < n; i++)cin >> v[i];

		dp = vector<int>(n + 1, -1);
		cout << f(n, v) << endl;
	}

	return 0;
}