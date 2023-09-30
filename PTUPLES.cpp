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
const int N = 1e6 + 6;
vector<int>isPrime(N, 1), ans(N, 0);

void pre() {

	isPrime[0] = isPrime[1] = 0;

	for (int i = 2; i * i < N; i++) {
		if (isPrime[i]) {
			for (int j = 2 * i; j < N; j += i) {
				isPrime[j] = 0;
			}
		}
	}

	int cnt = 0;
	for (int i = 5; i < N; i++) {
		if (isPrime[i] and isPrime[i - 2]) {
			cnt++;
		}
		ans[i] = cnt;

	}

}

int main()
{

	cp();
	pre();
	int t; cin >> t;

	while (t--) {

		int n; cin >> n;

		cout << ans[n] << endl;


	}

	return 0;
}