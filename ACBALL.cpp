#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define f  first;
#define s  second;
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
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		int n = s1.size();
		for (int i = 0; i < n; i++) {

			if (s1[i] != s2[i])cout << 'B';
			else {
				if (s1[i] == 'B')cout << 'W'; else cout << 'B';
			}
		}
		cout << endl;
	}	
	return 0;
}