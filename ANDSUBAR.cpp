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

int power(int n) {
	int p = 1;
	while (p * 2 <= n)p *= 2;

	return p;
}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		ll n; cin >> n;

		int lp = power(n);
		int prevPower = lp / 2;
		int ans1 = n - lp + 1;
		int ans2 = lp - prevPower;

		cout << max(ans1, ans2) << endl;
	}


	return 0;
}