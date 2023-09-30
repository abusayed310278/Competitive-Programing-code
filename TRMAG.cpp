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

		int n; cin >> n;
		double sum = n * (n + 1) / 2.0;

		int m; cin >> m;
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			sum -= x;
		}

		int tp = (n + 1) / 2;
		int f; cin >> f;
		double ans = 1.0 * (tp - f) / tp * sum;

		cout << fixed << setprecision(4) << ans << endl;

	}


	return 0;
}

/*

2
10
2 1 2
2
10
1 8
0

*/