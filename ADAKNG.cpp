#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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

bool isValid(int r, int c) {

	return (r >= 1 and r <= 8 and c >= 1 and c <= 8);
}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int r, c, k; cin >> r >> c >> k;

		queue<pair<int, int>>q;
		q.push(make_pair(r, c));

		// vector<vector<int>>vis(10, vector<int>(10, 0)), moves(10, vector<int>(10, 0));
		int vis[9][9], moves[9][9];
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				vis[i][j] = 0;
				moves[i][j] = 0;
			}
		}

		int x[] = {1, 1, 1, 0, 0, -1, -1, -1};
		int y[] = { -1, 0, 1, -1, 1, -1, 0, 1};


		while (!q.empty()) {

			pair<int, int>cur = q.front();
			int curR = cur.first;
			int curC = cur.second;
			q.pop();

			vis[curR][curC] = 1;
			for (int idx = 0; idx < 8; idx++) {

				int nextX = curR + x[idx];
				int nextY = curC + y[idx];

				pair<int, int>nextCell = make_pair(nextX, nextY);

				if (isValid(nextX, nextY) and vis[nextX][nextY] == 0) {

					q.push(nextCell);
					vis[nextX][nextY] = 1;
					moves[nextX][nextY] = moves[curR][curC] + 1;
				}
			}

		}

		int ans = 0;
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {

				if (moves[i][j] <= k)ans++;
			}
		}
		cout << ans << endl;

	}

	return 0;
}