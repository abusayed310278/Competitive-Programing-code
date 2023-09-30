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

		int a, b, p, q; cin >> a >> b >> p >> q;

		if (a == p and b == q) {cout << 0 << endl;}
		else if ((a + b) % 2 != (p + q) % 2) {cout << 1 << endl;}
		else {
			cout << 2 << endl;
		}



	}

	return 0;
}