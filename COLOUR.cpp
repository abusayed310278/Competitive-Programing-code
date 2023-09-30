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

		vi v(3);
		for (int i = 0; i < 3; i++)cin >> v[i];

		sort(rbegin(v), rend(v));

		int ans = 0;
		for (int i = 0; i < 3; i++) {
			if (v[i]) {
				ans++;
				v[i]--;
			}
		}

		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (v[i] and v[j]) {
					ans++;
					v[i]--;
					v[j]--;
				}
			}
		}


		cout << ans << endl;

	}

	return 0;
}