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
		s += s[0];
		int ln = s.length();
		int gg = 0, rr = 0;

		for (int i = 0; i < ln; i++) {

			if (s[i] == s[i + 1]) {

				if (s[i] == 'R')rr += 1; else gg += 1;

			}

		}

		if ((rr == 1 and gg == 1) or (rr == 0 and gg == 0))cout << "yes\n";else cout << "no\n";


	}

	return 0;
}