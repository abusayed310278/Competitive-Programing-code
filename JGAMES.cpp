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

		int x, y; cin >> x >> y;

		while (y > 0) {

			x += 1;
			y--;
		}

		if (x & 1)cout << "Jay" << endl; else cout << "Janmansh" << endl;
	}


	return 0;
}