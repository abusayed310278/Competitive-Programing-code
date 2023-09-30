#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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

const int mod = 998244353;

int add(int x, int y) {int res = x + y; return (res >= mod ? res - mod : res);}
int mul(int x, int y) {int res = x * y; return (res >= mod ? res % mod : res);}
int sub(int x, int y) {int res = x - y; return (res < 0 ? res + mod : res);}
int power(int x, int y) {if (y < 0)return 1; int res = 1; x %= mod; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);}}
int inv(int x) {return power(x, mod - 2);}

int32_t main()
{

	cp();
	int n; cin >> n;
	int ans = 0;

	for (int i = 1; i <= 2 * n - 1; i += 2) {
		ans = add(ans, inv(i));
	}

	ans = mul(ans, 2);
	cout << ans << endl;

	return 0;
}