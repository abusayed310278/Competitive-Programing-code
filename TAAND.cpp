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

int msb(int n) {

	int pos = 0;
	while (n) {
		n /= 2;
		++pos;
	}

	return pos;
}

int32_t main()
{

	cp();
	int n; cin >> n;

	vi a(n);
	for (int i = 0; i < n; i++)cin >> a[i];

	vi is(n, 1);
	int ans = 0;

	for (int j = 30; j >= 0; j--) {

		int c = 0;
		for (int i = 0; i < n; i++) {
			if (is[i] and a[i] & (1 << j))c++;
		}

		if (c >= 2) {

			for (int i = 0; i < n; i++) {
				if (!(a[i] & (1 << j)))is[i] = 0;
			}

			ans += 1LL * (1 << j);

		}


	}
	cout << ans << endl;


	return 0;
}