#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
using namespace std;

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

		int n, y; cin >> n >> y;

		int temp = 0;
		while (n-- > 0) {
			int x; cin >> x;
			temp |= x;
		}


		if ((temp | y) != y) {cout << -1 << endl;} else {cout << y - temp << endl;}

	}


	return 0;
}