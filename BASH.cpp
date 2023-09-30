#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int x;cin>>x;
			sum += x;
		}

		cout << sum / n << endl;


	}


	return 0;
}