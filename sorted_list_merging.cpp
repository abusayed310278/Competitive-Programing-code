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


	vector<int>a = {4 , 5 , 6};

	vector<int>b = {4 , 10, 11, 12 , 13};

	int n = a.size(), m = b.size();

	int full = n + m;

	vector<int>c(n + m + 1);

	if (n > m)swap(n, m);

	int i = 0, j = 0, k = 0;
	for (i = 0; i < n; i++) {

		if (a[i] < b[j]) {
			c[k++] = a[i++];
		} else if (a[i] > b[j])
			c[k++] = b[j++];


	}
	m = m - n + 1;
	for (; j < m; j++) {
		c[k++] = b[j++];
	}

	for (int i = 0; i < full; i++)cout << c[i] << " ";

	return 0;
}