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

void f(int n, char from, char helper, char to) {

	if (n == 0)return;

	f(n - 1, from, to, helper);
	cout << from << "->" << to << endl;
	f(n - 1, helper, from, to);

}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		f(n, 'A', 'B', 'C');
	}


	return 0;
}


/*


1
3
10 40 70
20 50 80
30 60 90



*/