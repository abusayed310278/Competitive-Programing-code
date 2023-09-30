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

int convert(string &s) {

	int ans = 0;
	for (int i = s.size() - 1, j = 0; i >= 0; i--, j++) {
		if (s[i] == '1') {
			ans += (1 << j);
		}
	}
	return ans;
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		string s; cin >> s;

		int c = n;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') {
				c=i;break;
			}
		}

		cout << c << endl;




	}

	return 0;
}