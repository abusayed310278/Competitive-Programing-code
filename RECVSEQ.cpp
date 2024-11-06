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


inline void cp() {


#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


const int N = 5e5 + 7;
int a[N];
int b[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cp();
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		for (int i = 1; i <= n; i++)    cin >> a[i];

		b[1] = a[1];
		int d = a[2] - a[1];
		int cnt = 0;

		for (int i = 2; i <= n; i++) {
			b[i] = b[i - 1] + d;
			if (b[i] != a[i])   cnt++;
			if (cnt == 2)   break;
		}

		if (cnt <= 1) {
			for (int i = 1; i <= n; i++)    cout << b[i] << " ";
			cout << "\n";
			continue;
		}

		b[n] = a[n];
		d = a[n - 1] - a[n];
		cnt = 0;

		for (int i = n - 1; i >= 1; i--) {
			b[i] = b[i + 1] + d;
			if (b[i] != a[i])   cnt++;
			if (cnt == 2)   break;
		}

		if (cnt <= 1) {
			for (int i = 1; i <= n; i++)    cout << b[i] << " ";
			cout << "\n";
			continue;
		}
		assert(false);
	}
}