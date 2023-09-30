#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

void build(int s, int e, vector<int>&v, vector<int>&tree, int idx) {

	if (s == e) {
		tree[idx] = v[s];
		return;
	}

	int mid = (s + e) / 2;
	build(s, mid, v, tree, 2 * idx);
	build(mid + 1, e, v, tree, 2 * idx + 1);

	tree[idx] = ();
}


int main()
{

	cp();
	int n; cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];

	vector<int>tree(4 * n + 1);
	build(0, n - 1, v, tree, 1);

	int q; cin >> q;
	while (q--) {

		int c; cin >> c;
		if (c == 1) {
			int l, r, p; cin >> l >> r >> p;
			update(l, r, p);
		} else if (c == 2) {
			int idx, val; cin >> idx >> val;
			query(idx, val);
		}
	}


	return 0;
}

/*

3
1 2 3
5
1 2 2 2
1 2 2 2
2 2 3
1 2 3 3
2 1 5

*/