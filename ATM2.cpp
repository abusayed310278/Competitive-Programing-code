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

	// cp();
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		string ans = "";
		for (int i = 0; i < n; i++) {

			if (k - v[i] >= 0) {
				ans += "1";
				k -= v[i];
			} else {
				ans += "0";
			}
		}
		cout << ans << endl;
	}


	return 0;
}