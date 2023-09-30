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

		int m, x, y; cin >> m >> x >> y;
		vector<int>v(111111 + 111, 1);

		while (m--) {
			int d; cin >> d;
			for (int i = max(1, d - (x * y)) ; i <= d + (x * y); i++) {
				v[i] = 0;
			}
		}

		int ans = 0;
		for (int i = 1; i < 101; i++) {
			if (v[i])ans++;
		}
		cout << ans << endl;

	}

	return 0;
}