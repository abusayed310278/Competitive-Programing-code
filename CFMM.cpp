#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define f  first;
#define ss  second;
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

		vector<int>v(6, 0);

		string s;
		int n; cin >> n;
		while (n--) {
			string x; cin >> x;
			s += x;
		}

		int nc = count(begin(s), end(s), 'c');
		int no = count(begin(s), end(s), 'o') * 2;
		int nd = count(begin(s), end(s), 'd') * 2;
		int ne = count(begin(s), end(s), 'e');
		int nh = count(begin(s), end(s), 'h') * 2;
		int nf = count(begin(s), end(s), 'f') * 2;

		int result = min({nc, no, nd, ne, nh, nf});

		cout << result / 2 << endl;

	}

	return 0;
}