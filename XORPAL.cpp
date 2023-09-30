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


void solve() {


	int n; cin >> n;
	string s; cin >> s;


	if (n & 1) {
		cout << "Yes\n";
		return;
	}

	int a0 = 0, a1 = 0;
	for (int i = 0; i < n ; i++) {

		if (s[i] == '1')a1++; else a0++;

	}

	if ( (a0 == a1 or (a0 % 2 == 0) and (a1 % 2 == 0) )  )cout << "Yes\n"; else cout << "No\n";

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();

	}

	return 0;
}