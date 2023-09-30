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

		int n; cin >> n;

		
		if ((n % 4)) {
			cout << "NO\n";
			continue;
		}

		cout << "YES\n";
		vi a, b;
		for (int i = 1, f = 0; i <= n; i += 2, f = !f) {
			if (f)a.pb(i), b.pb(i + 1);
			else a.pb(i + 1), b.pb(i);

		}

		reverse(begin(b),end(b));

		for (auto x : a)cout << x << " ";
		cout << endl;
		for (auto x : b)cout << x << " ";
		cout << endl;


	}

	return 0;
}