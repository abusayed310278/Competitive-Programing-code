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

		int n, m; cin >> n >> m;
		int g[n + 1][m + 1];

		int x1, y1; cin >> x1 >> y1;
		int x2, y2; cin >> x2 >> y2;
		g[x1][y1] = 1;
		g[x2][y2] = 2;


		bool flag = ((x1 + y1) & 1) != ((x2 + y2) & 1);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {

				if ((i == x1 and j == y1) or (i == x2 and j == y2) )continue;
				if ( ((i + j) & 1) == ((x1 + y1) & 1) ) {
					g[i][j] = 1;
				} else {
					g[i][j] = (flag ? 2 : 3);
				}

			}

		}


		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {

				cout << g[i][j] << " ";
			}
			cout << endl;
		}

	}

	return 0;
}