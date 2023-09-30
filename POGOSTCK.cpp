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

		int n, k; cin >> n >> k;
		vector<int>v(n), suf(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			suf[i] = 0;
		}

		int maxi = INT_MIN;
		for (int i = n - 1; i >= 0 ; i--) {

			if (i + k < n)
				suf[i] += suf[i + k];

			suf[i] += v[i];
			maxi = max(maxi, suf[i]);

		}

		cout << maxi << endl;

	}

	return 0;
}