#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

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
		vector<ll>v(n + 1, 0);
		for (int i = 1; i <= n; i++) {
			int x; cin >> x;
			if (x <= n)v[x]++;
		}

		ll ans = 0, cur = 1;
		for (int i = 1; i <= n; i++) {

			
			cur = (cur * v[i]) % mod;
			ans = (ans + cur) % mod;
			
		}

		cout << ans << endl;
	}


	return 0;
}

/*

2
5
1 2 3 2 4
6
1 3 5 8 9 8

*/