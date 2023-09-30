#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

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

vi v;
void pre() {

	for (int i = 1; i <= 30; i++)
		for (int j = 0; j < i; j++)
			v.push_back((1 << i) + (1 << j));

	sort(begin(v), end(v));

}

int32_t main()
{

	cp();
	pre();

	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		auto next = lower_bound(begin(v), end(v), n);
		auto pre = upper_bound(begin(v), end(v), n);
		pre--;
		
		int ans = min(abs(n - *pre), abs(n - *next));


		cout << ans << endl;


	}

	return 0;
}