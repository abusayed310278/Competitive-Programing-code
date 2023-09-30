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

		string a, b; cin >> a >> b;
		int n=a.size();
		int cnt0 = count(begin(a), end(a), '0');

		if (cnt0 == 0 or cnt0 == n) {
			cout << "Unlucky Chef\n";
			continue;
		}

		int d1 = 0, d2 = 0;
		for (int i = 0; i < n; i++) {

			if (a[i] != b[i]) {

				if (a[i] == '0')d1++; else d2++;

			}

		}
		cout<<"Lucky Chef\n";
		cout << max(d1, d2) << endl;

	}

	return 0;
}