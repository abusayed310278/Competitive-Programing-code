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

		int n; cin >> n;
		if (n == 3) {
			cout << 1 << " " << 2 << " " << 3 << endl;
			continue;
		}
		cout << n << " " << n - 2 << " ";
		for (int i = 1; i <= n - 4; i++) {

			cout << i << " ";

		}
		cout << n - 3 << " " << n - 1 << endl;


	}


	return 0;
}