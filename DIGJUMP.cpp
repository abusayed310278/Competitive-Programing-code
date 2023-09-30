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
	string s; cin >> s;
	int len = s.length();

	vector<int>g[10];
	for (int i = 0; i < len; i++) {

		g[s[i] - '0'].push_back(i);
	}

	int d[len] {0}; bool vis[len] {false};
	queue<int>q;


	d[0] = 0;
	vis[0] = true;
	q.push(0);

	while (!q.empty()) {

		int idx = q.front();
		q.pop();

		if (idx == len - 1)break;

		int val = s[idx] - '0';
		int sz = g[val].size();

		for (int j = 0; j < sz; j++) {

			int next = g[val][j];
			if (!vis[next]) {

				d[next] = d[idx] + 1;
				vis[next] = true;
				q.push(next);
			}

		}

		g[val].clear();

		if (idx + 1 >= 0 and idx + 1 < len) {

			if (!vis[idx + 1]) {
				d[idx + 1] = d[idx] + 1;
				vis[idx + 1] = true;
				q.push(idx + 1);
			}


		}

		if (idx - 1 >= 0 and idx - 1 < len) {

			if (!vis[idx - 1]) {
				d[idx - 1] = d[idx] + 1;
				vis[idx - 1] = true;
				q.push(idx - 1);
			}

		}


	}
	cout << d[len - 1] << endl;


	return 0;
}