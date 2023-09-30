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
	int t; cin >> t;
	while (t--) {

		int p; cin >> p;
		int j = 0;
		vi pno(p + 1);
		int pp = p;
		int maxi = INT_MIN, ind = 0;
		bool flag = 0;
		while (pp--) {

			j++;

			int n; cin >> n;
			set<int>s;
			int temp = 0;
			for (int i = 1; i <= n; i++) {
				int x; cin >> x;
				s.insert(x);
			}

			int m = s.size();

			if (m == 4) {
				temp = n + 1;
			} else if (m == 5) {
				temp = n + 2;
			} else if (m == 6) {
				temp = n + 4;
			}

			if (n + temp >= maxi) {
				maxi = n + temp;
				ind = j;

			}

			s.clear();
		}


		if (ind == 1) {
			cout << "chef" << endl;
		} else if (ind == p) {
			cout << "tie" << endl;
		} else {
			cout << ind << endl;
		}



	}



	return 0;
}