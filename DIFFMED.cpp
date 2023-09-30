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
		vector<int>v(n + 1);
		int x = 1, y = n;
		for (int i = 1; i <= n; i += 2) {
			v[i] = y;
			v[i + 1] = x;
			y--;
			x++;
		}


		for (int i = 1; i <= n; i++) {

			cout << v[i] << " ";
		}
		cout << endl;
	}


	return 0;
}