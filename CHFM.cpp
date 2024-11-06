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



const int mod = 1e9 + 7;

void solve() {

	int n; cin >> n;
	vector<double> a(n);

	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	double mean = (sum / n);



	for (auto x : a) {

		if (x == mean) {
			mini = min(mini, x);
		}

	}

	if (flag == INT_MAX) {
		cout << "Impossible" << endl;
	} else {
		cout << mini << endl;
	}


}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}