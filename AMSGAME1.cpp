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

		int size; cin >> size;

		vector<long>v(size);
		for (int i = 0; i < size; i++) {
			cin >> v[i];

		}

		long ans = v[0];
		for (int i = 1; i < size; i++) {

			ans = __gcd(ans, v[i]);

		}


		cout << ans << endl;
	}


	return 0;
}