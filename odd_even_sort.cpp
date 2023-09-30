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
	int n; cin >> n;
	vi a(n);
	for (int i = 0; i < n; i++)cin >> a[i];

	auto odd_even_sort = [&](const auto & self, vi & a, int n)->void{

		bool flag = false;

		while (!flag) {

			flag = true;

			for (int i = 1; i <= n - 2; i += 2) {

				if (a[i] > a[i + 1]) {
					swap(a[i], a[i + 1]);
					flag = false;
				}

			}

			for (int i = 0; i <= n - 2; i += 2) {

				if (a[i] > a[i + 1]) {
					swap(a[i], a[i + 1]);
					flag = false;
				}

			}

		};

		odd_even_sort(odd_even_sort, a, n);

		for (auto x : a) {
			cout << x << " ";
		}


	};

	return 0;
}