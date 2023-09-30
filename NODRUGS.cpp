#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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

		int n, k, l; cin >> n >> k >> l;
		vector<int>v(n + 1);

		int maxi = INT_MIN;
		for (int i = 1; i <= n - 1; i++) {
			cin >> v[i];
			maxi = max(maxi, v[i]);
		}

		cin >> v[n];

		if (k > 0) {
			v[n] += k * (l - 1);
		}



		if (v[n] > maxi)cout << "Yes\n"; else cout << "No\n";

	}

	return 0;
}