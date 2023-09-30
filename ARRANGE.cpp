#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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

int power(int a, int b) {

	int res = 1;
	while (b > 0) {

		if (b & 1)res *= a;

		b >>= 1;
		a *= a;

	}

	return res;

}

int binary(int num, int k) {

	int arr[16] = {0};
	int idx = 0;

	for (int i = 15; i >= 0; i--) {

		int temp = num >> i;
		arr[idx++] = (temp & 1 ? 1 : 0);

	}

	reverse(arr, arr + 16);

	int d = 0;
	int index = 0;
	for (int i = k - 1; i >= 0; i--) {

		d += arr[i] * power(2, index);
		index++;

	}


	return d;


}

void solve() {

	int k; cin >> k;
	string s; cin >> s;

	bool vis[1 << k] = {false};
	for (int i = 0; i < (1 << k); i++) {

		int id = binary(i, k);
		if (!vis[id]) {
			vis[id] = true;
			vis[i] = true;
			swap(s[i], s[id]);
		}

	}

	cout << s << endl;

}

int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}