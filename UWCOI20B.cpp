#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;



const int mod = 1e9 + 7;




void solve() {

	int n; cin >> n;


	int o = 0, e = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;

		if (x & 1)o++; else e++;
	}



	cout << o*e << endl;

}

int32_t main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}