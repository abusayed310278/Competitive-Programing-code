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
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		int minprice = v[0];
		int maxprice = INT_MIN;

		for (int i = 1; i < n; i++) {

			int cost = v[i] - minprice;
			maxprice = max(maxprice, cost);
			minprice = min(minprice, v[i]);
		}

		cout << maxprice << endl;
	}


	return 0;
}