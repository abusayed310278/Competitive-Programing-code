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

vector<vector<int>>dp;
vector<vector<char>>g;

int mod = 1e9 + 7;

//top down
int f(int i, int j) {

	if (i == 1 and j == 1)return 1;
	if (i < 0  || j < 0)return 0;
	if (dp[i][j] != -1)return dp[i][j];

	if (g[i][j] != '#')
		dp[i][j] = f(i - 1, j) % mod + f(i, j - 1) % mod;
	return dp[i][j] % mod;
}

//bottom up



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int h, w; cin >> h >> w;
		g = vector<vector<char>>(h + 1, vector<char>(w + 1, -1));
		dp = vector<vector<int>>(h + 1, vector<int>(w + 1, -1));

		//top down
		/*for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> g[i][j];
			}
		}*/

		// cout << f(h, w) << endl;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> g[i][j];
			}
		}
			
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {

				if (i == 0 and j == 0)dp[i][j] = 1;
				else if (i == 0)dp[i][j] = dp[i][j - 1];
				else if (j == 0)dp[i][j] = dp[i - 1][j];
				else {
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
				if(g[i][j]=='#')dp[i][j]=0;
				dp[i][j] %= mod;
			}


		}
		cout << dp[h - 1][w - 1] << endl;

	}
		
	return 0;
}