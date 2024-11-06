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

	int n; cin >> n;

	int x; cin >> x;
	int g = x;

	for (int i = 1; i < n; i++) {
		cin >> x;
		g = __gcd(g, x);
	}


	cout << (g == 1 ? 0 : -1) << endl;


}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}