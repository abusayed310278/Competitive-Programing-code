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



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>v(3);
		for (int i = 0; i < 3; i++)cin >> v[i];
		int d;cin>>d;

		int ans=0;
		int i=n-1;
		while(d>0){

			d-=v[i];
		}	
		ans++;
		ans+=(i-0);

		cout << ans << endl;
	}


	return 0;
}