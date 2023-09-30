#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		int ans = 0;
		for (int i = 1; i * i <= n; i++) {

			if (n % i == 0) {

				int d1 = i, d2 = n / i;
				if (d2 == 2)ans++; else ans += 2;

				if (d1 != d2 and d2 != n) {
					if (d1 == 2)ans++; else ans += 2;
				}

			}

		}


		cout << ans  << endl;

	}

	return 0;
}