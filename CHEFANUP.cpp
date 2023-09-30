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


int32_t main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n, k, l; cin >> n >> k >> l; l--;
		vi a(n);

		for (int i = n - 1; i >= 0; --i, l /= k)a[i] = (l) % k + 1;

		for (auto e : a)cout << e << " ";

		cout << endl;

	}


	return 0;
}