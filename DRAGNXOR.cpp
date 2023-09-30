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

		int n, a, b; cin >> n >> a >> b;


		int a0 = 0, a1 = 0, b1 = 0, b0 = 0;
		for (int i = 0; i < n; i++) {

			if (a & (1 << i))a1++; else a0++;
			if (b & (1 << i))b1++; else b0++;
		}

		int c = min(a0, b1) + min(a1, b0);

		int ans = 0;
		for (int i = n - 1; i >= 0; i--) {
			
			if(c==0)break;
			ans += (1 << i);
			c--;
		}

		cout << ans << endl;

	}

	return 0;
}