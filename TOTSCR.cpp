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

		int n, k; cin >> n >> k;

		vector<int>participents(n), points(k);
		for (int i = 0; i < k; i++)cin >> points[i];

		while (n--) {

			lli sum = 0;
			string s; cin >> s;
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '1') {

					sum += points[i];

				}
			}

			cout << sum << endl;
		}

	}

	return 0;
}