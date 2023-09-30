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
const int N = 2 * (1e5 + 5);
int arr[N];
int tree[8 * N];
string s;

void build(int node, int s, int e) {

	if (s == e) {
		tree[s] = arr[s];
		return;
	}

	int mid = (s + e) >> 1;
	build(2 * node, s, mid);
	build(2 * node + 1, mid + 1, e);

	tree[node] = max(tree[s], tree[e]);
	return;
}

int query(int node, int s, int e, int l, int r) {

	if (l > r)return 0;
	if (s >= l and e <= r)return tree[node];

	int mid = (s + e) / 2;

	int a = query(2 * node, s, mid, l, min(r, mid));
	int a = query(2 * node + 1, mid + 1, e, max(i, mid + 1), r);
	return (a, b);

}

int main()
{

	cp();
	int n, k, p; cin >> n >> k >> p;
	int sz = 2 * n;
	for (int i = 1; i <= n; i++)cin >> arr[i];
	for (int i = n + 1; i <= sz; i++)arr[i] = arr[i - n];

	arr[0] = 0;

	build(1, 1, sz);

	if (k >= n) {

		cin >> s;
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (s[i] == '?')cout << arr[n] << endl;
		}

	} else {

		

	}


	return 0;
}