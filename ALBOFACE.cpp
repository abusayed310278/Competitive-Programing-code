#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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


int win(int n) {

	if (n == 0)return 1;
	else if (n & 1)return !win(n - 1);
	else if (n % 4)return !win(n / 2);

	return 0;
}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		if (win(n)) {
			cout << "Bob\n";
		} else {
			cout << "Alice\n";
		}

	}


	return 0;
}