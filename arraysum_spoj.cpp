#include <bits/stdc++.h>
using namespace std;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


int main() {

	cp();
	int n, k, m;
	cin >> n;
	int a[n];
	set<int> se;
	for (int i = 0; i < n; i++)cin >> a[i];
	cin >> k;
	for (int i = 0; i <= n - k; i++) {
		m = a[i];
		for (int j = i; j < k + i; j++)m = max(m, a[j]);
		cout << m << " ";
	}
	return 0;
}