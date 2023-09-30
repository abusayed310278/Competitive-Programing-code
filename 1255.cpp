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
	int t; cin >> t;
	while (t--) {

		int ws, ls; cin >> ws >> ls;

		vector<string>w(ws);
		for (int i = 0; i < 4; i++)cin >> w[i];
		vector<char>l(ls);
		for (int i = 0; i < 9; i++)cin >> l[i];
		vector<int>s(26);
		for (int i = 0; i < 26; i++)cin >> s[i];

		unordered_map<char, int>m;
		for (auto &ch : l) {
			m[ch] = s[ch - 'a'];
		}

		for(int i=0;i<m.size();i++){
			cout<<m[i]<<endl;
		}

		int ans = INT_MIN;
		for (auto &x : w) {

			int temp = 0;
			for (char &a : x) {
				temp = temp + m[a];
			}

			ans = max(temp, ans);
		}

		// cout << ans << endl;

	}

	return 0;
}