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


//find ways
int f(int n, vector<int>&dp) {

	if (n <= 3)return 1;
	if (dp[n] != -1)return dp[n];

	return dp[n] = f(n - 1, dp) + f(n - 4, dp);
}




int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>dp(n + 1, -1);
		cout << f(n, dp) << endl;
	}


	return 0;
}


/*

1
4

*/