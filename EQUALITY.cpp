#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define int long long
#define l long
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
		vector<int>v(n + 1);

		int ai = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];

			ai += v[i];
		}

		int s = ai / (n - 1);

		for (int i = 0; i < n; i++) {

			cout << s - v[i] << " ";
		}
		cout << endl;


	}

	return 0;
}