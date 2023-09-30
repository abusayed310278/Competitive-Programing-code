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

		lli a, b, c; cin >> a >> b >> c;

		lli ans = -1;
		for (lli i = 1; i <= 101; i++) {

			lli x = (a ^ i);
			lli y = (b ^ i);
			lli z = (c ^ i);
			
			if ( x < y and y < z  ) {
				ans = i; break;
			}
		}

		cout << ans << endl;

	}

	return 0;
}