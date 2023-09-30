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

int f(int egg, int floor) {

	int ans = INT_MAX;
	for (int i = 1; i <= floor; i++) {
		int temp = 1 + max(f(egg - 1, i - 1), f(egg, floor - i) );
		ans = min(ans, temp);
	}
	return ans;
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int egg, floor; cin >> egg >> floor;
		cout << f(egg, floor) << endl;
	}


	return 0;
}