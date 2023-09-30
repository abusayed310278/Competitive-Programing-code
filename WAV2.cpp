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

	int n, q; cin >> n >> q;
	vector<int>v(n + 1);
	for (int i = 0; i < n; i++)cin >> v[i];

	while (q--) {

		int ans = 1;
		int x; cin >> x;
		for (int i = 0; i < n; i++) {

			if (x - v[i] == 0) {cout << 0 << endl; break;}
			if (x - v[i] < 0)ans *= -1;
			if (x - v[i] > 0)ans *= 1;
		}

		if (ans > 0)cout << "POSITIVE" << endl; else cout << "NEGATIVE" << endl;
	}

	return 0;
}