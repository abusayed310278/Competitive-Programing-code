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

	double d,u; cin >> d>>u;
	int n; cin >>n;

	double mini = u * d;
	int idx = 0;
	for (int i = 1; i <= n; i++) {

		int m; cin >> m;
		double r; cin >> r;
		double c; cin >> c;

		double cur = (u * r + (c / m)) ;
		if (cur < mini) {
			idx = i;
			mini = cur;
		}


	}

	cout << idx << endl;


}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}