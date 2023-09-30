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


		int n, a, b; cin >> n >> a >> b;

		if (a > b) {
			swap(a, b);
		}

		if (a + 1 == b) {

			int ans = 0;
			if (a - 1 >= 1 and a - 1 <= n) {
				ans += 1;
			}

			if (b + 1 >= 1 and b + 1 <= n) {
				ans += 1;
			}

			cout << ans << endl;
			continue;
		}

		if (a + 2 == b) {
			cout << 1 << endl;
			continue;
		}

		cout << 0 << endl;

	}

	return 0;
}

/*

3
4 2 3
6 2 1
5 2 5

*/