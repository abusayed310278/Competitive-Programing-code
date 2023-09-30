#include<bits/stdc++.h>
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

		vector<int>a(15);
		for (auto &x : a) {
			cin >> x;
			cout << x << " ";
		}

		cout << endl;
	}



	return 0;
}