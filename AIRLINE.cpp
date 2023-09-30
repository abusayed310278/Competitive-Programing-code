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

		int a, b, c, d, e; cin >> a >> b >> c >> d >> e;


		if ( (a+b) <= d and c <= e || (b+c)<=d and  a<=e || (c+a)<=d and  b<=e) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}

	}

	return 0;
}