#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define f  first;
#define s  second;
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

		int n, x; cin >> n >> x;
		vector<int>v;

		for (int i = 1; i <= n / 2; i++) {
			v.push_back(x - i);
			v.push_back(x + i);
		}

		if (n & 1)v.push_back(x);

		for (auto &x : v) {
			cout << x << " ";
		}

		cout << endl;
	}


	return 0;
}