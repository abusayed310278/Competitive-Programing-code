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
	int t; cin >> t;
	while (t--) {

		string s; cin >> s;
		int ans = 0;
		for (int i = 0; i < s.size(); i++) {

			if ((s[i] == 'x' and s[i + 1] == 'y') or (s[i] == 'y' and s[i + 1] == 'x')) {
				ans++;
				i++;
			}
		}

		cout << ans << endl;

	}

	return 0;
}