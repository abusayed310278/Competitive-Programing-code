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
int N = 1e4 + 5;
vi div3(N, 0);

void pre() {

	int j = 1;
	for (int i = 3; i <= N; i += 3) {

		if (i % 9 == 0)continue;

		if ((i & 1) and (i % 3 == 0)) {
			div3[j] = i;
			j++;
		}

	}



}



int main()
{

	pre();
	cp();
	int t = 1; cin >> t;
	while (t--) {

		int n; cin >> n;
		cout << div3[n] << endl;
	}

	return 0;
}