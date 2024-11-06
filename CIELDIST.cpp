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



const int mod = 1e9 + 7;

void solve() {

	ll ds, dt, d; cin >> ds >> dt >> d;
	ll ans;

	if (d > ds + dt) {
		ans = d - (ds + dt);
	} else if (ds > d + dt) {
		ans = ds - (d + dt);
	} else if (dt > d + ds) {
		ans = dt - (d + ds);
	} else {
		ans = 0;
	}

	cout <<fixed<< setprecision(6) << ans << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}