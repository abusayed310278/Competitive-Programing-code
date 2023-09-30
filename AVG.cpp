#include<bits/stdc++.h>
#define endl "\n"

using namespace std;



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

		int n, k, v; cin >> n >> k >> v;

		int s=0;
		for (int i = 0; i < n; i++){
			int x;cin>>x;
			s+=x;
		}

		int ka = (v * (n + k) - s);

		if (ka > 0 and ka % k == 0)
			cout << ka / k << endl;
		else
			cout << -1 << endl;

	}

	return 0;
}