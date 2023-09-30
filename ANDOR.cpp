#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		ll x; cin >> x;
		ll a = 1, b=x-1;

		// b = x - 1;


		if (a >= 0 and b >= 0)
			cout << a << " " << b << endl;
		else
			cout << -1 << endl;
	}


	return 0;
}