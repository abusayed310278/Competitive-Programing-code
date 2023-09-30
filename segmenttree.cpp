#include<bits/stdc++.h>
using namespace std;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

vector<int>a, tree;

void build(int s, int e, int ind) {

	if (s == e) {
		tree[ind] = a[s]; return;
	}

	int mid = (s + e) / 2;
	build(s, mid, 2 * ind);
	build(mid + 1, e, 2 * ind + 1);

	tree[ind] = min(tree[2 * ind], tree[2 * ind + 1]);
	return;
}

int query(int s, int e, int l, int r, int ind) {

	if (s > r or e < l)return INT_MAX;

	if (s >= l and e <= r)return tree[ind];

	int mid = (s + e) / 2;

	int q1 = query(s, mid, l, r, 2 * ind);
	int q2 = query(mid + 1, e, l, r, 2 * ind + 1);

	return min(q1, q2);
}

void pointUpdate(int s, int e, int idx, int val, int ind) {

	if (idx > e or idx < s)return;

	if (s == e) {tree[ind] += val; return;}

	int mid = (s + e) / 2;
	pointUpdate(s, mid, idx, val, 2 * ind);
	pointUpdate(mid + 1, e, idx, val, 2 * ind + 1);
	tree[ind] = min(tree[2 * ind], tree[2 * ind + 1]);

	return;
}

void rangeUpdate(int s, int e, int l, int r, int val, int ind) {

	if (s > r or e < l)return;
	if (s == e) {tree[ind] += val; return;}

	int mid = (s + e) / 2;
	rangeUpdate(s, mid, l, r, val, 2 * ind);
	rangeUpdate(mid + 1, e, l, r, val, 2 * ind + 1);
	tree[ind] = min(tree[2 * ind], tree[2 * ind + 1]);

	return;
}

void show(int n) {

	for (int i = 1; i <= n; i++) {
		cout << tree[i] << " ";
	}

}

int main() {

	cp();
	int n; cin >> n;
	a.resize(n + 1);;

	for (int i = 0; i < n; i++)cin >> a[i];

	tree.resize(4 * n + 1, 0);
	build(1, n, 1);

	int q; cin >> q;
	while (q--) {

		int t; cin >> t;
		/* 1=query,2=point update,3=range update */
		if (t == 1) {

			int l, r; cin >> l >> r;
			cout << query(1, n, l, r, 1) << endl;
			show(n);
		} else if (t == 2) {

			int idx, val; cin >> idx >> val;
			pointUpdate(1, n, idx, val, 1);

		} else {

			int l, r, val; cin >> l >> r >> val;
			rangeUpdate(1, n, l, r, val, 1);

		}

	}

}

/*

7
1 3 2 -5 6 4 7
1
1 4 4
2 2 1
1 1 4
2 3 5
1 2 1
3 2 5 5
1 2 6
3 1 3 8


*/