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

void solve() {

	int n, k; cin >> n >> k;
	string s; cin >> s;

	int zeros = 0, ones = 0;
	for (auto x : s) {
		if (x == '0')zeros++; else ones++;
	}

	int seg = n / k;



	if (zeros % seg == 0 and ones % seg == 0) {

		for (int i = 0; i < seg; i++) {

			if (i % 2 == 0) {

				for (int j = 0; j < zeros / seg; j++)cout << '0';
				for (int j = 0; j < ones / seg; j++)cout << '1';


			} else {
				for (int j = 0; j < ones / seg; j++)cout << '1';
				for (int j = 0; j < zeros / seg; j++)cout << '0';
			}


		}
		cout << endl;

	} else {
		cout << "IMPOSSIBLE\n";
	}

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