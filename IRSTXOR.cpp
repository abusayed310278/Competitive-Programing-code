#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int c; cin >> c;

		int d = (log2(c));

		int a = 1 << d;
		int b = 0;

		for (int i = 1; i <= d; i++) {

			if ((c & (1 << (d - i))) == 0)
			{
				a = a | (1 << (d - i));
				b = b | (1 << (d - i));
			} else {
				b = b | (1 << (d - i));
			}

		}

		cout << a*b << endl;

	}


	return 0;
}