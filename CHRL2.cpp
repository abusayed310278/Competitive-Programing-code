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
	int t=1; 
	//cin >> t;
	while (t--) {

		string s; cin >> s;
		int c, ch, che, chef;
		c = ch = che = chef = 0;

/*		if (s.size() < 4) {
			cout << 0 << endl;
			continue;
		}*/

		for (int i = 0; i < s.size(); i++) {

			if (s[i] == 'C') {
				c++;

			} else if (s[i] == 'H') {

				if (c > 0) {c--; ch++;}

			} else if (s[i] == 'E') {

				if (ch > 0) {ch--; che++;}

			} else if (s[i] == 'F') {

				if (che > 0) {che--; chef++;}

			}
		}

		cout << chef << endl;
	}

	return 0;
}