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
		vector<int>leves(n + 1);
		for (int i = 1; i <= n; i++)cin >> leves[i];

		int s = 1;
		bool flag = true;
		for (int i = 1; i < n; i++) {

			if (s < leves[i]) {
				flag = false;
				break;
			}

			s = (s - leves[i]) * 2;
		}

		int no = s;
		if (s and (no == leves[n])) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}

	}

	return 0;
}