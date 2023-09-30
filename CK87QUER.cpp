#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define l long
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


		l int y, b = 700; cin >> y;
		int cnt = 0;
		for (int i = 1; i <= min(b, y); i++) {
			cnt += sqrt(y - i);
		}

		cout << cnt << endl;
	}

	return 0;
}