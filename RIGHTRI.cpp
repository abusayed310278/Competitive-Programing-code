#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
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
	int t; cin >> t;
	int cnt = 0;
	while (t--) {

		int x1,  y1, x2, y2, x3, y3; cin >> x1 >>  y1 >> x2 >> y2 >> x3 >> y3;
		int a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		int b = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
		int c = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);


		if (a + b  == c  || b  +  c ==  a ||  c +  a ==  b)cnt++;



	}

	cout << cnt << endl;

	return 0;
}