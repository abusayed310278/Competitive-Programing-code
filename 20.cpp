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

class Solution {
public:
	stack<char>st;
	bool isValid(string s) {

		for (int i = 0; i < s.size(); i++) {

			char ch = s[i];

			if (ch == '(' or ch == '{' or ch == '[' ) {
				st.push(s[i]);
			} else {

				if (!st.empty()) {

					char tp = st.top();
					if ((tp == '(' and ch == ')') or (tp == '{' and ch == '}') or (tp == '[' and ch == ']') )
					{
						st.pop();
					} else {
						return false;
					}


				} else {
					return false;
				}

			}



		}
		if (st.empty())return true; else return false;
	}
};

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		string s; cin >> s;
		Solution ob;
		cout << ob.isValid(s) << endl;

	}

	return 0;
}