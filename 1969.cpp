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


int main()
{

	cp();
	int n; cin >> n;
	vector<int>v(n + 1), dp(n + 1, 0);

	for (int i = 0; i < n; i++)cin >> v[i];

	dp[0] = v[0], dp[1] = v[1];

	int ans = 0;
	for (int i = 2; i < n; i++) {

		dp[i] = min(v[i - 1] + dp[i - 1] , v[i - 2] + dp[i - 2]);
	}

	cout << dp[n-1] << endl;

	return 0;
}