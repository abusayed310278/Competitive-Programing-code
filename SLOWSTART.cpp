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



const int mod = 1e9 + 7;

void solve() {

	int x, h; cin >> x >> h;

	int moves = 0, d = 0;

	while (d < h) {

		if (d < 5)d += (int)x / 2; else d += x;

		moves++;
	}

	cout << moves << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {

		solve();

	}

	return 0;
}