#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		string a, ans; cin >> a;
		for (int i = 1; i < n; i++) {
			cin >> ans;
			for (int j = 0; j < 10; j++) {
				if (a[j] != ans[j])ans[j] = '1'; else ans[j] = '0';
			}
			a = ans;
		}

		int cnt = 0;
		for (int i = 0; i < 10; i++) {
			if (ans[i] == '1')cnt++;
		}

		cout << cnt << endl;

	}

	return 0;
}