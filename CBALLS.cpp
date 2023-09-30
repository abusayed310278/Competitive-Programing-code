#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

void seive(vector<int>&isPrime) {

	for (int i = 2; i < 1e4 + 1; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j < 1e4 + 1; j += i) {
				isPrime[j] = false;
			}
		}
	}
}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<int>isPrime(1e4 + 1, true);



		int ans = INT_MAX;
		for (int i = 2; i < 1e4 + 1; i++) {

			if (!isPrime[i])continue;

			int tempans = 0, cur_mul = 0;

			for (int j = 0; j < n; j++) {

				if (cur_mul < v[j])cur_mul = ((v[j] + i - 1) / i) * i;

				tempans += cur_mul - v[j];
			}

			ans = min(ans, tempans);
		}

		cout << ans << endl;

	}


	return 0;
}