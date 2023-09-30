#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


int get(int n) {

	int p = 0;
	while (n > 0) {
		p = p + (n % 10);
		n /= 10;
	}

	return p;
}

int main()
{

	cp();
	int t = 1;
	while (t--) {

		int n; cin >> n;

		int ans = 0;
		for (int x = max(0, n - 97); x <= n; x++) {

			int sx = get(x);
			int ssx = get(sx);
			int val = x + sx + ssx;
			if (val == n)ans++;
		}

		cout << ans << endl;
	}

	return 0;
}