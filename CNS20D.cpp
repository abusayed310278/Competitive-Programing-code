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

		int ans = 0;
		for (int i = 0; i < n-1 ; i++) {
			for (int j = i + 1; j < n; j++) {
				if ((v[i]&v[j]) == v[i])ans++;
			}
		}

		cout << ans << endl;
	}


	return 0;
}