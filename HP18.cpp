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

		int n, a, b; cin >> n >> a >> b;


		vi v(n + 1);
		for (int i = 1; i <= n; i++) {
			
			cin >> v[i];
			if (v[i] % a == 0) {
				v[i] = 0;
			}

			if (v[i] % b == 0) {
				v[i] = 0;
			}
		}

		
		for (int i = 1; i <= n; i++) {

			
		}


	}

	return 0;
}