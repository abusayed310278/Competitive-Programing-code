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

void solve(){

	int n, m;
    cin >> n >> m;
    
    int mx = -1, ans1 = 0, ans2 = 0,
    a=0,b=0;
    for (int a = n; a < 2 * n; a++)
    {	
    	b=(m/a)*a;
        if (b-a > mx)
            ans1 = a, ans2 = (m / a) * a, mx = b-a;
    }
    cout << ans1 << ' ' << ans2 << '\n';
    return;

    // cout<<"ok"<<endl;

    
}

int main()
{

	int t=1;cin>>t;
	while(t--){

		solve();
		
	}
	
	return 0;
}