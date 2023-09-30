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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi v(n);
		int total = -1;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			total &= v[i];
		}

		int g=0;
		for (int i = 0, cur = -1; i < n; i++) {
			cur &= v[i];
			if (cur == total) {
				g++;
				cur = -1;
			}

		}

		cout << n - g << endl;

	}


	return 0;
}