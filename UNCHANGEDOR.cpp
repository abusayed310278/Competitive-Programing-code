#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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

int pow2(int i) {
	return 1 << i;
}

int max_num(int i) {

	return pow2(i + 1) - 1;
}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		int count = 0;
		// int x=n;

		while (n >> count) {
			count++;
		}

		int ans = 0;
		for (int i = 1; i < count; i++) {
			ans += min(n, max_num(i)) - pow2(i);
		}

		cout << ans << endl;
	}

	return 0;
}