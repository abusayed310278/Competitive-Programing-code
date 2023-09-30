#include<bits/stdc++.h>
using namespace std;

vector<int>a, st, lazy;

void build(int s, int e, int node) {

	if (s == e) {
		st[node] = a[s];
		return;
	}

	int m = (s + e) / 2;
	build(s, m, 2 * node + 1);
	build(m + 1, e, 2 * node + 2);

	st[node] = st[2 * node + 1] + st[2 * node + 2];
	return;
}

void propagate(int s, int e, int node) {

	if (lazy[node] != 0) {

		st[node] += lazy[node] * (e - s + 1);
		if (s != e) {
			st[2 * node + 1] += lazy[node];
			st[2 * node + 2] += lazy[node];
		}
		lazy[node] = 0;
	}

}

int query(int s, int e, int l, int r, int node) {

	propagate(s, e, node);
	if (s > r or e < l)return 0;

	if (s >= l and e <= r)return st[node];

	int m = (s + e) / 2;
	int q1 = query(s, m, l, r, 2 * node + 1);
	int q2 = query(m + 1, e, l, r, 2 * node + 2);

	return q1 + q2;

}

void rangeUpdate(int s, int e, int l, int r, int val, int node) {


	if (s > r or e < l)return;
	propagate(s, e, node);

	if (s >= l and e <= r) {
		st[node] += val * (e - s + 1);
		if (s != e) {
			st[2 * node + 1] += val;
			st[2 * node + 2] += val;
		}
		return;
	}

	int m = (s + e) / 2;
	rangeUpdate(s, m, l, r, val, 2 * node + 1);
	rangeUpdate(m + 1, e, l, r, val, 2 * node + 2);
	st[node] = st[2 * node + 1] + st[2 * node + 2];

	return;

}

void show(int n) {

	for (int i = 0; i < n; i++)cout << st[i] << " ";

}

int main() {


	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);

	int n; cin >> n;
	a.resize(n + 1);
	for (int i = 0; i < n; i++)cin >> a[i];

	st.resize(4 * n + 1, 0);
	lazy.resize(4 * n + 1, 0);

	build(0, n - 1, 0);

	// show(n); cout << endl;

	int q; cin >> q;
	while (q--) {

		int t; cin >> t;
		if (t == 1) {
			int l, r; cin >> l >> r;
			cout << query(0, n - 1, l, r, 0) << endl;
		} else {
			int l, r, val; cin >> l >> r >> val;
			rangeUpdate(0, n - 1, l, r, val, 0);

		}
		show(n);
		cout << endl;


	}

}