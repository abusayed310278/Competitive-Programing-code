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



const int mod = 1e9 + 7;


void solve() {

	int n, s; cin >> s >> n;

	int count = 0;
	if (s % 2) count++, s--;
	while (s)
	{
		count += (s / n);
		if (s < n)
		{
			count++;
			break;
		}
		s = s % n;
	}
	cout << count << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}