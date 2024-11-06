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

	int n, a, b; cin >> n >> a >> b;

	string s; cin >> s;

	int ans = 0;
	for (auto x : s) {
		if (x == '0')ans += a; else ans += b;

	}

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