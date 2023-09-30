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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);

		for (int i = 0; i < n; i++)cin >> v[i];
		sort(begin(v), end(v));

		int ans = 0;
		for (int i = 0; i < n; i++) {
			int tmp = upper_bound(begin(v), end(v), v[i]) - begin(v);

			ans += tmp > (n - tmp);
		}

		cout << ans << endl;

	}

	return 0;
}