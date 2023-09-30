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

		string s; cin >> s;

		int n = s.size();

		int up = 0, down = 0;
		for (int i = 0; i < n - 1; i++) {

			if (s[i] == 'U' and s[i + 1] == 'D') {
				up++;
			} else if (s[i] == 'D' and s[i + 1] == 'U') {
				down++;

			}

		}

		if (s[n - 1] == 'U')up++;
		if (s[n - 1] == 'D')down++;

		cout << min(up, down) << endl;

	}

	return 0;
}