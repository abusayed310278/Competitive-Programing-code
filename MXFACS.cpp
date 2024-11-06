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

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;


int main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		int n; cin >> n;
		int max_pow = 0, min_f = 1e9;
		for (int i = 2; i * i <= (n); i++) {
			if (n % i == 0) {
				int pow = 0;
				while (n % i == 0) {
					n /= i;
					pow++;
				}

				if (pow > max_pow)max_pow = pow, min_f = i;
			}
		}

		if (max_pow == 0)min_f = n;


		cout << min_f << endl;
	}

	return 0;
}