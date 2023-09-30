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
	int n; cin >> n;

	int mini = 1e9, maxi = 0, maxind = 0, minind = 0;
	for (int i = 1; i <= n; i++) {

		int x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int area =  abs(x1 * y2 + x2 * y3 + x3 * y2 - x2 * y1 - x3 * y2 - x1 * y3);

		if (area >= maxi) {
			maxi = area;
			maxind = i;
		}

		if (area <= mini) {
			mini = area;
			minind = i;
		}

	}
	cout << minind << " " << maxind;


	return 0;
}