#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;

		int a = -1, b = -1;
		for (int i = 2; i * i < n; i++) {

			if (n % i == 0) {
				a = i;
				b = n / i;
				break;
			}

		}

		if (a == -1) {
			cout << -1 << endl;
		}
		else {
			cout << 1 << " " << a << " " << b << endl;
		}

	}

	return 0;
}