#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n), res(31, 0);
		for (int i = 0; i < n; i++)cin >> v[i];

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < 30; j++) {
				if ((1 << j)&v[i])res[j] = 1;
			}

		}

		int ans = 0;
		for (auto x : res)if (x)ans++;
		cout << ans << endl;

	}

	return 0;
}