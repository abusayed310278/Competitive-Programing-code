#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;


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
vector<int>dp(N, 0);

void pre() {

	dp[3] = 3;
	dp[4] = 4;
	dp[5] = 5;

	for (int i = 6; i <= N; i++) {

		dp[i] = i + dp[i / 2];

	}

}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		pre();

		vector<pair<ll, ll>>v;
		for (int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;
			v.push_back({x, y});
		}

		if (n <= 5) {
			cout << n << endl;
			continue;
		}

		cout << dp[n] << endl;
	}

	return 0;
}