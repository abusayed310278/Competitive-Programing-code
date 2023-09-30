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
		int i = 1, j = n;
		while (i != j) {
			a.pb(i); a.pb(j);
			i++, j--;
			b.pb(i); b.pb(j);

		}

		// reverse(begin(b),end(b));

		for (auto x : a)cout << x << " ";
		cout << endl;
		for (auto x : b)cout << x << " ";
		cout << endl;


	}

	return 0;
}