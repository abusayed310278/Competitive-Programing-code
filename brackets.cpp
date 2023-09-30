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

string ans = "";

void f(int i, int n, int open, int close) {

	if (i == 2 * n) {
		cout << ans << endl;
		return;
	}

	if (open < n) {
		ans += '(';
		f(i + 1, n, open + 1, close);
		ans.pop_back();
	}
	if (open > close) {
		ans += ')';
		f(i + 1, n, open, close + 1);
		ans.pop_back();
	}
}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		int ind = 0, open = 0, close = 0;
		f(ind, n, open, close);
		cout << endl;
	}


	return 0;
}

/*

1
3


*/