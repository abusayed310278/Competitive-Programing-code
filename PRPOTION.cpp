#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int r, g, b, m; cin >> r >> g >> b >> m;
		vector<int>rc(r), gc(g), bc(b);

		int maxr = -1, maxg = -1, maxb = -1;
		for (int i = 0; i < r; i++) {cin >> rc[i]; maxr = max(maxr, rc[i]);}
		for (int i = 0; i < g; i++) {cin >> gc[i]; maxg = max(maxg, gc[i]);}
		for (int i = 0; i < b; i++) {cin >> bc[i]; maxb = max(maxb, bc[i]);}

		vector<int>arr(3);
		arr[0] = maxr;
		arr[1] = maxg;
		arr[2] = maxb;

		for (int i = 0; i < m; i++) {

			sort(begin(arr), end(arr));
			arr[2] /= 2;

		}

		sort(begin(arr), end(arr));

		cout << arr[2] << endl;

	}

	return 0;
}