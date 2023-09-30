#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 10000
bool is_prime[MAXN + 1];
int sieve[MAXN + 1];

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


void init() {
	memset(is_prime, true, (MAXN + 1)*sizeof(bool));
	memset(sieve, 0, (MAXN + 1)*sizeof(int));

	int tmp = 0;
	is_prime[0] = false;
	is_prime[1] = false;

	for (int i = 2; i <= MAXN; i++) {
		if (!is_prime[i])
			continue;

		sieve[tmp++] = i;
		for (int j = i * i; j <= MAXN; j += i) {
			is_prime[j] = false;
		}
	}
}
int solve() {
	int n;
	cin >> n;

	int q = 0, ans = 0;
	while (q <= MAXN) {

		int p = n - 2 * sieve[q];

		if (p < 2)
			break;

		if (is_prime[p])
			ans++;

		q++;
	}
	return ans;
}
int main() {
	cp();
	init();
	int tt;
	cin >> tt;
	while (tt--)cout << solve() << '\n';
	return 0;
}