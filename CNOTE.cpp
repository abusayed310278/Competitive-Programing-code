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

int p[111111];
int c[111111];

void solve() {

	int x, y, k, n; cin >> x >> y >> k >> n;
	int need = x - y;


	bool flag = false;
	for (int i = 0; i < n; i++) {
		cin >> p[i] >> c[i];
	}
	for (int i = 0; i < n; i++) {
		if (p[i] >= x - y && c[i] <= k) {
			flag = true;
			break;
		}
	}
	cout << (flag ? "LuckyChef" : "UnluckyChef") << '\n';

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}