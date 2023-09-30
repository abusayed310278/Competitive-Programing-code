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

map<pair<int, int>,bool>m;

int f(int x, int y) {

	if (x < 1 || y < 1 || x > 15 || y > 15)return true;

	if (m.count({x, y}))return m[ {x, y}];

	bool ans = true;

	ans &= f(x - 2, y + 1);
	ans &= f(x - 2, y - 1);
	ans &= f(x + 1, y - 2);
	ans &= f(x - 1, y - 2);

	ans = !ans;

	return m[ {x, y}] = ans;
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int x, y; cin >> x >> y;

		if (f(x, y))cout << "First" << endl; else cout << "Second" << endl;
	}

	return 0;
}