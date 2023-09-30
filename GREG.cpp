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
const int N = 1e6 + 5;

vector<int>isPrime(N, 1);


void seive() {

	isPrime[0] = isPrime[1] = 0;
	for (int i = 2; i < N; i++) {

		if (isPrime[i]) {
			for (int j = 2 * i; j < N; j += i) {
				isPrime[j] = 0;
			}
		}
	}

}

int main()
{

	cp();
	seive();
	int n, m;
	while (cin >> n >> m) {

		int ans = 0;
		for (int i = 2; i <= n + m; i++) {

			if (isPrime[i]) {
				ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}