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

	int n, m, k, x; cin >> n >> m >> k >> x;

	x -= 1;
	if (x % (k * n + m) < (k - 1)*n) {
		cout << "No\n";
	} else {
		cout << "Yes\n";

	}


}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}