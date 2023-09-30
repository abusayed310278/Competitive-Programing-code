#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int l, r; cin >> l >> r;

		int odd = 0;

		if ( l % 2 == 0 and r % 2 == 0 )odd = (r - l) / 2; else odd = (r - l) / 2 + 1;

		if (odd & 1)cout << "Odd\n"; else cout << "Even\n";


	}

	return 0;
}