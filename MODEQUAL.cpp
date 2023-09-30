#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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


void solve() {

	int n; cin >> n;
	vi a(n);
	for (int i = 0; i < n; i++)cin >> a[i];

	int min_ele = *min_element(begin(a), end(a));
	int c = count(begin(a), end(a), min_ele);

	bool flag = false;
	for (int i = 0; i < n; i++) {

		if (a[i] == min_ele)continue;
		else if (a[i] <= 2LL * min_ele) {
			flag = true; break;
		}

	}

	if (flag)cout << n << endl; else cout << n - c << endl;


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