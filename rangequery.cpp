#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
// #define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;
vector<vector<int>>table;

void build(int n, vector<int>&arr) {

	int k = log(n) / log(2);
	table = vector < vector<int>>(k + 1, vector<int>(n, 0));

	for (int i = 0; i < n; i++)table[0][i] = arr[i];

	for (int j = 1; j <= k; j++) {
		for (int i = 0; i + (1 << j) <= n; i++) {
			table[j][i] = min(table[j - 1][i], table[j - 1][ i + 1 << (j - 1)  ]);
		}
	}


}

int query(int l, int r) {

	int count = r - l + 1;
	int k = log(count) / log(2);

	return min(table[k][l], table[k][ r - ((1 << k) + 1) ] );
}

int32_t main()
{

	cp();
	int n; cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)cin >> arr[i];

	build(n, arr);

	int q; cin >> q;
	while (q--) {

		int l, r; cin >> l >> r;
		cout << query(l, r) << endl;
	}


	return 0;
}