#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

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

		if (n == 2) {
			cout << -1 << endl;
			continue;
		}

		if (n & 1) {
			for (int i = 1; i <= n; i++)cout << i << ' ';
			cout << endl;
			continue;
		}

		if (n % 2 == 0) {

			cout << 2 << ' ' << 3 << ' ' << 1 << ' ';
			for (int i = 4; i <= n; i++)cout << i << ' ';

			cout << endl;

		}


	}

	return 0;
}