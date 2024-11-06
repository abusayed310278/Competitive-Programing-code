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

	int n; cin >> n;
	if (n <= 4) {
		cout << 0 << " " << n << endl;
	} else {
		cout << 1 << " " << n - 1 << endl;
	}

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}