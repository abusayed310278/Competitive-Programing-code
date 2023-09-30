#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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


void solve() {

	int g, p; cin >> g >> p;
	vi x(11);
	for (int i = 1; i <= 10; i++)cin >> x[i];

	int d = 0;

	for (int j = 10; j > g; j--) {
		d += x[j] / p; x[j - 1] += x[j] % p;
	}

	int mn = d + 1;
	int mx = d + (x[g] + p - 1) / p;

	cout << mn << " " << mx << endl;



}







int main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}