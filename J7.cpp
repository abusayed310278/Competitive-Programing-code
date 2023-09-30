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

		double p, s; cin >> p >> s;
		double a = 12, b = -2 * p, c = 2 * s;


		double h = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		double ans = h * ((s / 2) - h * ((p / 4) - h));

		cout << fixed << setprecision(2) << ans << endl;
	}

	return 0;
}