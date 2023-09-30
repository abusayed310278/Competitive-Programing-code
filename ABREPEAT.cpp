#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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


signed main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		string s; cin >> s;
		int a = 0, b = 0, ab = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'a')a++;
			else if (s[i] == 'b') {
				b++;
				ab += a;
			}
		}

		int ans = (ab * k) + (a * b) * k * (k - 1) / 2;
		cout<<ans<<endl;

	}

	return 0;
}