#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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


int main()
{

	cp();
	int t;
	cin >> t;
	while (t--)
	{
		int l, r; cin >> l >> r;
		if ((l ^ (l + 1) ^ (l + 2) ^ (l + 3)) == 0) {//l is even
			cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << endl;
		}
		else if (l + 4 > r) {
			cout << -1 << endl;
		}
		else {//l is odd
			cout << l + 1 << " " << l + 2 << " " << l + 3 << " " << l + 4 << endl;
		}
	}

	return 0;
}


