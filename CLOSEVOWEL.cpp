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



const ll mod = 1e9 + 7;

ll power(ll x, ll n)
{
	ll ans = 1;
	while (n != 0)
	{
		if (n % 2 == 1)
			ans = (ans * x) % mod;
		x = (x * x) % mod;
		n /= 2;
	}
	return ans % mod;
}

void solve() {

	int n; cin >> n;
	string s; cin >> s;

	vector<char>vo = {'a', 'e', 'i', 'o', 'u'};


	int cnt = 0;
	for (char x : s) {

		if (x == 'a' or x == 'e' or x == 'e' or x == 'i' or x == 'u')continue;

		int mini = 26;
		for (char v : vo ) {
			mini = min(mini, abs(x - v));
		}

		int ch = 0;
		for (char v : vo ) {

			int cur = abs(v - x);
			if (cur == mini)ch++;
		}

		cnt += (ch == 2);

	}

	ll ans = power(2, cnt);

	cout << ans << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}