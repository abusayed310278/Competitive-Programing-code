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


void solve() {

	int n, d; cin >> n >> d;

	int num = n, pos = 0;
	int ans = 0;

	while (num > 0) {

		int dig = num % 10;
		num /= 10;
		pos++;

		if (dig == d) {
			num = num * pow(10, pos);
			num += (dig + 1) * pow(10, pos - 1);

			ans = num - n;
			pos = 0;
		}

	}

	cout << ans << endl;


}


int main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {
		solve();
		// cout << "hello" << endl;


	}



	return 0;
}