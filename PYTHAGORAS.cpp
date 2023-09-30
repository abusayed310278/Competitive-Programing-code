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


void solve() {

	int n; cin >> n;

	int c = 0;

	while (n % 2 == 0) {
		n /= 2;
		c++;
	}

	while (c % 2 != 0) {
		n *= 2;
		c--;
	}

	int even = 1LL << (c / 2);


	int a = -1, b = -1;
	for (int i = 0; i * i <= n; i++) {

		int x = n - i * i;
		int y = sqrt(x);

		if (y * y != x)y++;
		if (y * y != x)continue;

		a = i;
		b = y;

		break;
	}

	if (a == -1)cout << -1 << endl; else cout << even*a << " " << even*b << endl;


}




int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}