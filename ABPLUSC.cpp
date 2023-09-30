#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
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

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int x; cin >> x;

		if (x < 2) {
			cout << -1 << endl;
			continue;
		}

		int a, b, c;

		a = floor(sqrt(x - 1));
		b = a;


		if ((a * (a + 1)) < x)b++;

		cout << a << " " << b << " " << (x - (a * b)) << endl;

	}



	return 0;
}