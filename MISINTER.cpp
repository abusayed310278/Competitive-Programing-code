#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define int long long
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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>arr(n, -1), vis(n, 0);
		for (int i = 0; i < n; i++) {
			if (i % 2)arr[i] = i / 2; else arr[i] = (n + i) / 2;
		}

		int cycle = 0;
		for (int i = 0; i < n; i++) {

			if (vis[i])continue;
			cycle++;

			while (!vis[i]) {
				vis[i] = 1;
				i = arr[i];
			}
		}


		int ans = 1;
		while (cycle--) {
			ans = (ans * 26) % mod;
		}

		cout << ans << endl;
	}


	return 0;
}