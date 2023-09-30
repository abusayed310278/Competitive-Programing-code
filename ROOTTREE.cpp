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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>in(n + 1);
		for (int i = 1; i <= n - 1; i++) {
			int u, v; cin >> u >> v;
			in[v]++;
		}

		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (in[i] == 0)cnt++;
		}

		cout << cnt - 1 << endl;
	}

	return 0;
}