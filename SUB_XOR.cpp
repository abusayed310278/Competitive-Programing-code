#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 998244353;


int main()
{

	cp();
	int t, n; cin >> t;
	while (t--) {

		string s;
		cin >> n >> s;
		vector<int> cnt(n);
		for (int i = 0; i < n; ++i)
			if (s[i] == '1')cnt[n - i - 1] += (i + 1);

		for (int j = n - 2; j >= 0; --j)
			cnt[j] += cnt[j + 1];

		int ans = 0, cur = 1;
		for (int i = 0; i < n; ++i)
		{
			if (cnt[i] % 2)
				ans = (ans + cur) % mod;
			cur = (cur * 2) % mod;
		}
		cout << ans << "\n";

	}


	return 0;
}