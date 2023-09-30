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

void f(vi &v, int n, int k) {

	if (k == 0)return;
	else if (k & 1)k = 1;
	else k = 2;

	for (int i = 0; i < k; i++) {

		int maxi = v[0];
		for (int j = 0; j < n; j++) {
			maxi = max(maxi, v[j]);
		}

		for (int j = 0; j < n; j++) {
			v[j] = maxi - v[j];
		}

	}

	return;

}

int32_t main()
{

	cp();
	int t = 1;;
	while (t--) {

		int n, k; cin >> n >> k;

		vi v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		f(v, n, k);

		for (int x : v) {
			cout << x << " ";
		}



	}

	return 0;
}