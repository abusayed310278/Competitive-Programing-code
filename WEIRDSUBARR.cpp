#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;
using vc = vector<char>;
using vvc = vector<vc>;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;


int f(int i, int j, string &s, string &t, vvi &dp) {

	if (i < 0 || j < 0)return 0;

	if (s[i] == t[j])
		return 1 + f(i - 1, j - 1, s, t, dp);

	if (dp[i][j] != -1)return dp[i][j];

	return dp[i][j] = max( f(i - 1, j, s, t, dp)  , f(i, j - 1, s, t, dp)  );

}


int ff(int i, int j, string &s, string &t, vvi &dp) {

	

	vvi dp(n + 1, vi (m + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			if (s[i] == t[j])
				return 1 + f(i - 1, j - 1, s, t, dp);



			dp[i][j] = max( f(i - 1, j, s, t, dp)  , f(i, j - 1, s, t, dp)  );

		}
	}


}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		string s; cin >> s;
		string t = "aaaaa#bb#cc#dddd";
		int n = s.size();
		int m = t.size();


		cout << f(n - 1, m - 1, s, t, dp) << endl;

	}

	return 0;
}