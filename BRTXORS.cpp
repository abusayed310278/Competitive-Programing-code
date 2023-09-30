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

		lli n; cin >> n;
		lli ans = 1;
		if (n == 2) {
			cout << 2 << endl;
			continue;
		}

		/*
			check power of n: if((n&(n-1))==0)	

		*/

		while (ans < n) {  
			ans *= 2;
		}

		if (ans == n) {
			ans *= 2;
			ans--;
		}

		cout << ans % mod << endl;

	}

	return 0;
}