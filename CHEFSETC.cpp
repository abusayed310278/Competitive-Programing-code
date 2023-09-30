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

void solve() {

	vector<int>v(4);
	for (int i = 0; i < 4; i++) {
		cin >> v[i];
	}

	int size = (1 << 4);

	for (int i = 1; i < size; i++) {

		int cur = 0;
		for (int j = 0; j < 4; j++) {
			if (i & (1 << j))cur += v[j];
		}

		if (cur == 0) {
			cout << "Yes\n"; return;
		}
	}

	cout << "No\n";

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}