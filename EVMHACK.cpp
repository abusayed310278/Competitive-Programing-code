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



const int mod = 1e9 + 7;

int main()
{
	int t; cin >> t;
	int a, b, c, p, q, r;
	int cnt = 0;
	while (t--) {
		cin >> a >> b >> c;

		cin >> p >> q >> r;

		bool ans = max({p + b + c, a + q + c, a + b + r}) > (p + q + r) / 2;
		cout << (ans ? "YEs" : "No") << endl;
		cnt += ans;
	}
}