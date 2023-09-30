#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
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

		int x, y; cin >> x >> y;
		int z = x ^ y;
		vi ans(3, 2);


		if (x & 1)ans[0] = 2 ^ x;
		if (y & 1)ans[1] = 2 ^ y;
		if (z & 1)ans[2] = 2 ^ z;

		sort(begin(ans), end(ans));
		cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;


	}



	return 0;
}