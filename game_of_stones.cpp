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
const int N = 105;
vector<int>dp(N, 0);

void pre() {

	for (int i = 0; i < N; i++) {

		if (i % 7 == 0 || i % 7 == 1)dp[i] = 0; else dp[i] = 1;

	}

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		pre();
		int n; cin >> n;
		if (dp[n] == 1)cout << "First" << endl; else cout << "Second" << endl;


	}

	return 0;
}