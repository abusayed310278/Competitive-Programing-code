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
	int t = 1;
	while (t--) {

		ll n, m; cin >> n >> m;
		unordered_map<int, int>mp;
		string s; cin >> s;
		vector<ll>temp(n);

		for (int i = 0; i < n; i++) {

			ll sum = 0;
			int cur = s[i] - '0';
			for (int j = 0; j <= 9; j++) {
				sum += abs(cur - j) * mp[j];
			}
			temp[i] = sum;
			mp[cur]++;
		}

		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			cout << temp[x - 1] << endl;
		}


	}

	return 0;
}