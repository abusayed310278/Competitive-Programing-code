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
	int t = 1; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i];

		}


		int i = 0, j = 0;
		for (i = 0; i < 30; i++) {
			for (j = 0; j < n; j++) {
				if (a[j] & (1 << i))break;
			}
		}

		for (; i < 30; i++) {
			for (; j < n; j++) {
				if (a[j] & (1 << i)) {
					a[j] = (a[j] ^ (1 << i));
				}
			}
		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}



	}

	return 0;
}