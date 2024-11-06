#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
#define F  first;
#define S  second;
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


void solve() {

	int n; cin >> n;
	vi a(n);
	for (auto &x : a)cin >> x;

	vector<bool>vis(n, false), vis2(n, false);

	int cnt, ans = 0;
	for (int i = 0; i < n; i++) {

		cnt = 0;
		if (vis[i] == false)
		{

			int s = i;
			while (vis[s] == false)
			{

				vis[s] = true;
				s = (s + 1 + a[s]) % n;

			}

			int start = s;
			bool flag = false;
			while (vis2[start] == false)
			{
				vis2[start] = true;
				start = (start + 1 + a[start]) % n;
				cnt++;
				if (s == start) {
					flag = true;
				}
			}

			if (flag)ans += cnt;

		}

	}

	cout << ans << endl;

}

int32_t main()
{
	// pre();
	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}