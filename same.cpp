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

	int a = 0, b = 0;
	int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (a = 0; a < 10, 10; ++a) {
		if (a % 2 == 0)b += c[a];
	}

	cout << b << endl;

	return 0;
}