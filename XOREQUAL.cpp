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
const int N = 1e5 + 5;

vector<int>dp(N);

void compute() {

	dp[0] = 1;
	for (int i = 1; i <= N; i++) {
		dp[i] = (dp[i - 1] * 2) % mod;
	}
}

int main()
{

	cp();
	compute();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		cout << dp[n - 1] << endl;
	}

	return 0;
}