#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;




const int mod = 1e9 + 7;


void solve() {


	ll n, p, k;	cin >> n >> p >> k;

	ll seg = n / k;
	ll desire = p % k;
	ll  rem = n % k;
	ll ans = 0;
	ans += (desire * seg);
	ans += p / k + 1;
	ans += min(rem, desire);

	cout << ans << endl;


}



int main()
{



	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}