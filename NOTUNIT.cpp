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

		int a, b; cin >> a >> b;

		int i = a, j = b;
		if (i == a and a + 1 == b) {
			cout << -1 << endl;
			continue;

		} else if (__gcd(a, a + 2) > 1) {
			i = a;
			j = a + 2;
		}

		cout << i << " " << j << endl;

	}

	return 0;
}