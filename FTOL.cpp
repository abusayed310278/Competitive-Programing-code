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


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

int dfs(int i, int j, int n, int m) {

	if (i == n and j == m)return 0;


	


}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, m, k; cin >> n >> m >> k;
		vector<pair<int, int>>sp(k);
		for (int i = 1; i <= k; i++) {
			cin >> v[i].first;
			cin >> v[i].second;
		}

		cout << dfs(1, 1, n, m) << endl;

	}

	return 0;
}