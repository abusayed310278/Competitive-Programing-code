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

int f(int n) {



	int ans = INT_MAX;
	for (int i = 1; i <= n; i++) {

		int x = f(i / 2);
		int y = f(i + 1);
		int z = f(i - 1);

		int ans = (min(x, min(y, z)));
	}
}

int main()
{

	cp();



	return 0;
}