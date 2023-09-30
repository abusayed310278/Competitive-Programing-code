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

int f(int n, vector<int>&dp) {

	if (n == 1)return 0;
	if (n == 2)return 1;
	if (dp[n] != -1)return dp[n];

	return dp[n] = (n - 1) * ( f(n - 2, dp) + f(n - 1, dp) );

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>dp(n + 1, -1);
		cout << f(n, dp) << endl;
	}

	return 0;
}